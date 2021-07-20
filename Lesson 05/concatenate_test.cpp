#include <iostream>
#include <string>
using namespace std;

int main(){
  string s1 = "Hello";
  string s2 = "world";
  string s = s1 + " " + s2;
  cout << s << endl;
  s1.append(" ");
  s1.append(s2);
  cout << s1 << endl;
}