#include <iostream>
#include <string>
using namespace std;

int main(){
  char c = 'A';
  string s = "abced";
  cout << typeid(s).name() << " " << sizeof(s) << endl;
}