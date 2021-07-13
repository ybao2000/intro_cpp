#include <iostream>
#include <ctime>
using namespace std;

enum Suit {
  Spade=4,
  Heart=3,
  Diamond=2,
  Club=1
};

// we have card with different suits
int main(){
  // I want to randomly generate suit?
  srand((unsigned)time(NULL));
  int num = rand() % 4 + 1; // num will be 1, 2, 3 or 4  
  cout << num << endl;
  Suit s1 = static_cast<Suit>(num); // convert an integer into an enum
  switch(s1){
    case Spade:
      cout << "You got a Spade";
      break;
    case Heart:
      cout << "You got a Heart";
      break;
    case Diamond:
      cout << "You got a diamond";
      break;
    case Club:
      cout << "You got a club";
      break;
  }
}