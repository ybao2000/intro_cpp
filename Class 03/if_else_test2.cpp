#include <iostream>
using namespace std;

int main(){
  int a = 11;
  if (a > 10){
    cout << "big" << endl;
  } 
  else if(a > 5){
    cout << "medium" << endl;
  }
  else if(a > 3) {
    cout << "some" << endl;
  }
  else{
    cout << "small" << endl;
  }
  if (a > 10){
    cout << "big" << endl;
  } 
  else {
    if(a > 5){
      cout << "medium" << endl;
    }
    else{
      if (a > 3){

      }
      else{
        cout << "small" << endl;
      }
    }
  }
}