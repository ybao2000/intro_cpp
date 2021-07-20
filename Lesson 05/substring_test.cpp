#include <iostream>
#include <string>
using namespace std;

int main(){
  string str = "Hello world";
  string str2 = str.substr(2, 3);
  cout << "value: " << str2 << ", size: " << str2.length() << endl;

  // if you want all the others, you can omit the cout
  string str3 = str.substr(3);
    cout << "value: " << str3 << ", size: " << str3.length() << endl;
}