#include <iostream>
using namespace std;

void my_print(){
  cout << "Hello world" << endl;
}

int main(){
  long long la = 202020;
  long long *lp;
  lp = &la;

  string s = "some";
  string *sp = &s; // sometimes you need to use pointer
  cout << "----------4-----------" << endl;
}