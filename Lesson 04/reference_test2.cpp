#include <iostream>
using namespace std;

void increase(int a){ // copy of the original value
  a++;
}

void increase(int *p){
  (*p)++;   // increase the value that p is point to
}

void increase2(int &a){ // a reference of the original value, or nickname
  a++;
}

int main(){
  int a = 100;
  // I want a function to increase a
  // increase(&a);
  increase2(a);
  cout << "value of a: " <<  a << endl;
}