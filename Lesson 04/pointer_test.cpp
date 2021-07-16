#include <iostream>
using namespace std;

void my_print(){
  cout << "Hello world" << endl;
}

int main(){
  int a = 8;
  int *p; 
  // how to assign the pointer
  p = &a;  
  cout << "value of a: " << a << "address of a: " << &a <<  endl;
  cout << "value of p: " << p << endl;

  // change the value at that address
  *p = 189;
  cout << "----------1-----------" << endl;
  cout << "value of a: " << a << "address of a: " << &a <<  endl;
  cout << "value of p: " << p << endl;
  // i want a pointer to store the address of p
  int **p2;
  p2 = &p;
  cout << "----------2-----------" << endl;
  cout << "value of p: " << p << "address of p: " << &p <<  endl;
  cout << "value of p2: " << p2 << endl;
  int ***p3;
  p3 = &p2;
  int ****p4;
  p4 = &p3;
  int *****p5;
  p5 = &p4;
  cout << "----------3-----------" << endl;
  cout << "value of p5: " << p5 << "address of p5: " << &p5 <<  endl;

  long long la = 202020;
  long long *lp;
  lp = &la;

  string s = "some";
  string *sp = &s; // sometimes you need to use pointer
  cout << "----------4-----------" << endl;

}