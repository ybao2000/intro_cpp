#include <iostream>
#include <string>
using namespace std;

int main(){
  string str1 = "Hello";
  string str2 = "Hello";
  bool c = str1 == str2;
  cout << c << endl;

  bool c2 = str1 < str2;
  cout << c2 << endl;

  int i = str1.compare(str2);
  cout << i << endl;
}