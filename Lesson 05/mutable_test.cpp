#include <iostream>
#include <string>
using namespace std;

int main(){
  string str = "Hello world";
  // we use index to get the character
  // "" means string, '' means char
  str[0] = 'M';
  cout << str << endl;

  char *str2 = new char[100];
  for (int i=0; i<100; i++){
    str2[i] = '0' + i;  // based on the ascill table
  }
  cout << str2 << endl;

  auto str3 = "Hello world";
  cout << "name: " <<  typeid(str3).name() << ", size: " << sizeof(str3) << endl;
  cout << str3 << endl;
}