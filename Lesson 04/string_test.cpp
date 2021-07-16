#include <iostream>
#include <string>
using namespace std;

int main(){
  // c 
  char str[] = "Hello world";
  cout << str << endl;
  cout << "type: " <<  typeid(str).name() << ", size: " << sizeof(str) << endl;

  char *str2 = new char[100];
  cout << "type: " <<  typeid(str2).name() << ", size: " << sizeof(str2) << endl;

  string str3 = "Hello world";
  cout << "type: " <<  typeid(str3).name() << ", size: " << sizeof(str3) << endl;
  cout << str3.length() << endl;
}