#include <iostream>
using namespace std;

void my_print() {
  cout << "hello world" << endl;
}
int main(){
  int a = 100;
  int *p = &a;

  void *vp;
  // vp = (void *)p;
  vp = (void *)my_print;
  double *dp;
  dp = (double *)p;
  cout << "value of p: " << p << ", address of p: " << &p << endl;
  cout << "value of vp: " << vp << ", address of vp: " << &vp << endl;
  cout << "-----------1---------------"<< endl;
  cout << "*p: " << *p << endl;
  // cout << "*vp: " << *vp << endl;
  cout << "*dp: " << *dp << endl;
}