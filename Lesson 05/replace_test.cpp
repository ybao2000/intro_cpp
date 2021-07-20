#include <iostream>
#include <string>
using namespace std;

int main(){
  string str = "Hello world";
  // I want to replace world with everyone
  string sub = "world";
  string sub2 = "everyone";
  int off = str.find(sub);
  cout << off << endl;
  string str2 = str.replace(off, sub.length(), sub2);
  cout << str << endl;
  cout << str2 << endl;

}