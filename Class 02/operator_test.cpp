#include <iostream>
using namespace std;

int main(){
 auto a = 3 % 4;
 cout << a << endl;

 auto c = 3 > 4;
 cout << c << endl;

//  int x = 1<<1;
//  int y = 1;
//  cout << x << endl;

 bool b1 = 3 > 4; // false
 bool b2 = 10 > 9; // true
 cout << !b1 << endl;

// unary test
 int i = 10;
//  --i; // what is the difference between i++ and ++i
// int x = i++;
// int y = ++i;
// i++;
// int x = i;
//  cout  << x << " " << y << endl;
// ternary
  int a2 = 3 > 4 ? 3 + 4 : 3 - 4;
  cout << a2 << endl;   // endl is the same \n, next line
}