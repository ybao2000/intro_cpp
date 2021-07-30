#include <bits/stdc++.h>  // this is supported by gnu c++
using namespace std;

int main(){
  set<string> set_a;
  set_a.insert("Frank");
  set_a.insert("austin");
  set_a.insert("alex");

  set_a.erase("Frank");

  for(auto elem : set_a){
    cout << elem << endl;
  }
}