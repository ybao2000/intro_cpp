#include <iostream>
#include <string>
using namespace std;

int main(){
  string strNum = "3.14";
  auto num = stod(strNum);
  cout << num + 1 << endl;

  string strNum1 = "5000";
  int i = stoi(strNum1);
  cout << i+1 << endl;

  float f = stof(strNum1);
  cout << f + 1 << endl;

  // what is we want to convert back
  int a = 100; // "100"
  auto s = to_string(a);
  cout << s + " number" << endl;
}