#include <iostream>
#include <string>
using namespace std;

int main(){
  string name = "Bob";
  int age = 8;
  // I am Bob, and I am 8 years old
  cout << "I am " << name << ", and I am " << age << " years old" << endl;
  // the problem is I need a string!!!
  char buffer[200];
  sprintf(buffer, "I am %s, and I am %d years old", name.c_str(), age);
  cout << buffer << endl;
}