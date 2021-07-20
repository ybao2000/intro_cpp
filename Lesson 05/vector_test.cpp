#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
  vector<char> vc;
  for(int i=0; i<100; i++){
    vc.push_back('0'+i);
  }
  for(auto c : vc){
    cout << c;
  }
  cout << endl;
}