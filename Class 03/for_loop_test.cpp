#include <iostream>
using namespace std;

int main(){
  // a simple example: Gauss proble: 1+2+3+...+100
  int sum = 0;
  for(int i=2; i<=20; i+=2){   // i start from 0, everytime just increase 1, until i <= 100 is not true, 101
    if(i % 10 == 0){
      // continue; // I am going skip 10, 20, 30, 40, ...
      break;
    }
    sum += i;
  }
  cout << sum << endl;
}

// 2 + 4 + 6 + 8 + 12 + 14 + 16 + 18 = 