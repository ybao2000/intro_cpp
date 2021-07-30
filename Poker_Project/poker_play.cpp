#include <bits/stdc++.h>
#include <iostream>
#include <io.h>
#include <fcntl.h>
using namespace std;

const wstring SPADE = L"\u2660";
const wstring CLUB = L"\u2663";
const wstring HEART = L"\u2665";
const wstring DIAMOND = L"\u2666";

enum Suit {
  Spade = 4,
  Heart = 3,
  Diamond = 2,
  Club = 1
};

enum Rank {
  RoyalFlush = 10,
  StraightFlush = 9,
  FourOfAKind = 8,
  FullHour = 7,
  Flush = 6,
  Straight = 5,
  ThreeOfAKind=4,
  TwoPairs = 3,
  OnePair = 2,
  HighHand = 1
};

wstring rankString(Rank rank){
  switch(rank){
    case RoyalFlush: return L"RoyalFlush";
    case StraightFlush: return L"StraightFlush";
    case FourOfAKind: return L"FourOfAKind";
    case FullHour: return L"FullHour";
    case Flush: return L"Flush";
    case Straight: return L"Straight";
    case ThreeOfAKind: return L"ThreeOfAKind";
    case TwoPairs: return L"TwoPairs";
    case OnePair: return L"OnePair";
    default: return L"HighHand";                                    
  }
}

class Pair {
  public:
    int number;
    int count;
  Pair(int n, int c){
    number = n;
    count = c;
  }
};

bool comparePair(Pair p1, Pair p2){
  if (p1.count > p2.count) {
    return true;
  }
  else if(p1.count < p2.count){
    return false;
  }
  else {
    return p1.number > p2.number;
  }
}

class Card {
  private:
    Suit _suit;
    int _number;
  public:
    Card() {}
    Card(Suit suit, int number){
      _suit = suit;
      _number = number;
    }
    Suit getSuit() {
      return _suit;
    }
    int getNumber() {
      return _number;
    }
    wstring strSuit() {
      switch(_suit){
        case Spade:
          return SPADE;
        case Heart:
          return HEART;
        case Diamond:
          return DIAMOND;
        default:
          return CLUB;
      }
    }
    wstring strNumber() {
      switch(_number){
        case 14:
          return L" A";
        case 13:
          return L" K";
        case 12:
          return L" Q";
        case 11:
          return L" J";
        case 10:
          return L"10";
        default:
          return L" " + to_wstring(_number);
      }
    }
    wstring toString(){
      return strSuit() + strNumber();
    }
};

class Hand {
  private:
    wstring _player;
    vector<Card> _cards;
    vector<Pair> _groups;
    Rank _rank;
  public:
    Hand(wstring player, vector<Card> cs){
      _player = player;
      _cards = cs;
    }
    wstring strCards() {
      bool bFirst = true;
      wstring s = L"";
      for(auto card : _cards){
        if (bFirst){
          s += card.toString();
          bFirst = false;
        }
        else {
          s += L" " + card.toString();
        }
      }
      return s;
    }

    void makeGroups() {
      map<int, int> mp;
      for (auto card: _cards){
        int number = card.getNumber();
        if (mp.find(number) == mp.end()){
          mp[number] = 1;
        }
        else{
          mp[number] += 1;
        }
      }
      for(auto item : mp){
        Pair pii(item.first, item.second);
        _groups.push_back(pii);
      }
      // need to sort _groups
      sort(_groups.begin(), _groups.end(), comparePair);
    }

    bool isRoyalFlush() {
      return isStraightFlush() && _cards[0].getNumber() == 14;
    }

    bool isStraightFlush() {
      return isStraight() && isFlush();
    }

    bool isFourOfAKind() {
      return _groups[0].count == 4;
    }
    bool isFullHouse() {
      return _groups[0].count == 3 && _groups[1].count == 2;
    }
    bool isFlush(){
      Suit suit = _cards[0].getSuit();
      for (auto card: _cards){
        if(card.getSuit() != suit){
          return false;
        }
      }
      return true;
    }

    bool isStraight() {
      int num = _cards[0].getNumber() + 1;
      for(auto card: _cards){
        if(card.getNumber() != num-1){
          return false;
        }
        else{
          num--;
        }
      }
      return true;
    }

    bool isThreeOfAKind() {
      return _groups[0].count == 3;
    }
    bool isTwoPairs() {
      return _groups[0].count == 2 && _groups[1].count == 2;
    }
    bool isOnePair() {
      return _groups[0].count == 2;
    }

    void setRank(){
      makeGroups();
      if(isRoyalFlush()){
        _rank = RoyalFlush;
      }
      else if(isStraightFlush()){
        _rank = StraightFlush;
      }
      else if(isFourOfAKind()){
        _rank = FourOfAKind;
      }
      else if(isFullHouse()){
        _rank = FullHour;
      }
      else if(isFlush()){
        _rank = Flush;
      }
      else if(isStraight()){
        _rank = Straight;
      }
      else if(isThreeOfAKind()){
        _rank = ThreeOfAKind;
      }
      else if(isTwoPairs()){
        _rank = TwoPairs;
      }
      else if(isOnePair()){
        _rank = OnePair;
      }
      else{
        _rank = HighHand;
      }
    }
    Rank getRank() {
      return _rank;
    }
    vector<Pair> getGroups(){
      return _groups;
    }
    wstring getPlayer() {
      return _player;
    }
    void show(){
        wcout << _player << " : " <<  strCards() << " , " << rankString(_rank) << endl;
    }
};

bool compareCard(Card c1, Card c2){
  return c1.getNumber() > c2.getNumber();
}

vector<Card> generateCards() {
  vector<Card> cards;
  for(int i=0; i<5; i++){
    Suit suit = static_cast<Suit>(rand() % 4 + 1);
    int number =  rand() % 13 + 2;
    Card card(suit, number);
    cards.push_back(card);
  }
  
  sort(cards.begin(), cards.end(), compareCard);
  return cards;
}

vector<Card> generateCards(int seqNo) {
  vector<Card> cards;
  cards.push_back(Card(Club, 13));
  cards.push_back(Card(Heart, 13));
  cards.push_back(Card(Club, 7));
  cards.push_back(Card(Spade, 5));
  cards.push_back(Card(Spade, 5));                
  
  sort(cards.begin(), cards.end(), compareCard);
  return cards;
}

bool compareGroups(vector<Pair> groups1, vector<Pair> groups2){
  int len1 = groups1.size();
  int len2 = groups2.size();
  if(len1 != len2){
    return len1 < len2;
  }
  else{
    for(int i=0; i<len1; i++){
      if(groups1.at(i).number > groups2.at(i).number){
        return true;
      }
      else if(groups1.at(i).number < groups2.at(i).number){
        return false;
      }
    }
  }
  return true;
}
bool compareHand(Hand hand1, Hand hand2){
  if(hand1.getRank() > hand2.getRank()){
    return true;
  }
  else if(hand1.getRank() < hand2.getRank()){
    return false;
  }
  else {
    return compareGroups(hand1.getGroups(), hand2.getGroups());
  }
}

int main() {
  _setmode(_fileno(stdout), _O_U16TEXT);   
  srand(time(NULL));
  vector<Hand> hands;
  for(int i=0; i<4; i++){
    Hand hand(L"Player " + to_wstring(i+1), generateCards());
    hand.setRank();
    hand.show();
    hands.push_back(hand);
  }
  bool c01 = compareHand(hands.at(0), hands.at(1));
  bool c02 = compareHand(hands.at(0), hands.at(2));
  bool c03 = compareHand(hands.at(0), hands.at(3));
  bool c12 = compareHand(hands.at(1), hands.at(2));
  bool c13 = compareHand(hands.at(1), hands.at(3));
  bool c23 = compareHand(hands.at(2), hands.at(2));   
  if(c01 && c02 && c03){
    wcout << hands.at(0).getPlayer() << " wins!" << endl;
  }
  else if(!c01 && c12 && c13){
    wcout << hands.at(1).getPlayer() << " wins!" << endl;
  }
  else if(!c02 && !c12 && c23){
    wcout << hands.at(2).getPlayer() << " wins!" << endl;
  }
  else{
    wcout << hands.at(3).getPlayer() << " wins!" << endl; 
  }     
}