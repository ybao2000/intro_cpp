#include <bits/stdc++.h>
using namespace std;

int main(){
  queue<string> q;
  q.push("Frank");
  q.push("Alpha");
  q.push("blalah");

  // for(auto elem : q){
  //   cout << elem << endl;
  // }
  q.pop();  // remove the first element

  while(!q.empty()){
    cout << q.front() << endl;  // get the first element
    q.pop();
  }
  
}