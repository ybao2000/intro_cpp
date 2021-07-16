#include <iostream>
#include <string>
using namespace std;

int main(){
  int age;
  cout << "Please enter your age: ";
  cin >> age;
  string name;
  cout << "Pease enter your name: ";
  cin.ignore(); // ignore the previous line, read the new line
  // cin >> name;
  getline(cin, name);
  cout << "Your name is " << name << ", your age is " << age << endl;  
}