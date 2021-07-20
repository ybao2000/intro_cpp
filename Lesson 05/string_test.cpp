#include <iostream>
#include <string>
using namespace std;

int main(){
  // c-style string, array of characters
  char str[] = "Hello world";
  cout << "name: " <<  typeid(str).name() << ", size: " << sizeof(str) << endl;

  char *str2; // pointer is fine without assignment
  str2 = new char[100];

    cout << "name: " <<  typeid(str2).name() << ", size: " << sizeof(str2) << endl;
    cout << str2 << endl;
  // without assignment, the pointer is called wild or dangling
  char *str3  = str;
  // str2 = str;
  cout << "name: " <<  typeid(str3).name() << ", size: " << sizeof(str3) << endl;
  cout << str3 << endl;

  string str4 = "Hello world";  // this is much better for string operation
  cout << "name: " <<  typeid(str4).name() << ", size: " << sizeof(str4) << endl;
  cout << str4 << endl;
  cout << str4.length() << endl;
}