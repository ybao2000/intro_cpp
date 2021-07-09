#include <iostream>
using namespace std;

int main(){
  // a test for auto, typeid
  long double a = 500;
  cout << typeid(a).name() << " " << sizeof(a) <<  endl;

  auto val = 50u;   // u is unsigned
  auto b = 0xFFFFFF; // hex number
  cout << b << endl;

  auto c = 1234L; // L means long

  auto d = 3.14f; // f means float

  auto e = 3.14;   // by default, decimal numbers are double

  auto f = 1e10;  // this is always a double

  auto c1 = '\'';  // i want a single quote character
  cout << c1 << endl;

  auto c2 = '\\';
  cout << c2 << endl;

  auto c3 = "\\\\";
  cout << c3 << endl;
}