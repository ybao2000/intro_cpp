#include <iostream>
#include <string>
using namespace std;

int main(){
  string str = "Hello world";
  for(auto c : str){
    cout << c;
  }
  cout << "---------1----------" << endl;

  char *str2 = "Hello world";
  int size = 200;
  for(int i=0; i<size; i++){
    cout << str2[i];
  }
    cout << "----------2---------" << endl;
  cout << endl;
  char *str3 = &str[0]; // str[0] the first character, & the address of the first character
  for(int i=0; i<size; i++){
    cout << str3[i];
  }
}