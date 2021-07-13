#include <iostream>
using namespace std;

int main(){
  int grade = 2;
  switch(grade) {
    case 1: 
    case 2: 
          cout << "you are a junior" << endl;
          break;
    default: 
        cout << "you are a senior" << endl;
        break;
  }
}