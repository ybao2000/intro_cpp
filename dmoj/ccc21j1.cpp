#include <iostream>
using namespace std;

int main(){
  int B, P;
  cin >> B;
  P = 5 * B - 400;
  cout << P << endl;
  if (B < 100) {
    cout << 1 << endl;
  } 
  else if(B > 100){
    cout << -1 << endl;
  }
  else{
    cout << 0 << endl;
  }
}