#include <iostream>
// #include <string>
// #include <cmath>
using namespace std;

int main(){
  int num;
  string direction;
  while(true){  // infinite loop
    cin >> num;
    if(num == 99999) break;
    // find the first 2 digits
    int d1 = num / 10000; // truncate
    int rem = num - d1 * 10000; // this is the remainder
    int d2 = rem / 1000;
    int d = d1 + d2;
    rem = rem - d2 * 1000;
    if(d > 0){
      direction = d % 2 == 0 ? "right" : "left";
    }
    cout << direction << " " << rem << endl;
  }
  // int num = 51111;
  // // what if I want a round
  // int result = ceil(num / 10000.0);
  // cout << result << endl;
}