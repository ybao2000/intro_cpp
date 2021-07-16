#include <iostream>
#include <string>
using namespace std;

int main(){
  int N;
  cin >> N;
  string winner, person;
  int max_bid = 0, bid;  // initialize the max of bid
  for(int i=0; i<N; i++){
    cin >> person;
    cin >> bid;
    if (bid > max_bid) {  // if the bid > max_bid
      max_bid = bid;
      winner = person;;
    }
  }
  cout << winner << endl;
}