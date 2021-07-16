#include <iostream>
using namespace std;

int main(){
  int a = 1000;
  int b = 2000;
  int *p = &a;  // I define a point p, its value is the address of a
  int &r = a;   // I define a reference (reference is not a variable!!!), b is just a nickname of a
    cout << "value of a: " << a << endl;
  cout << "value of *p: " << *p << endl;
  cout << "value of r: " << r << endl;
  cout << "------------1----------" << endl;

  // r = b; 
  b = r;
  cout << "value of a: " << a << endl;
  cout << "value of *p: " << *p << endl;
  cout << "value of r: " << r << endl;
}