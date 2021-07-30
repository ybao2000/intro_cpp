#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;
int main(){
  stack<pii> s;
  s.push(pii(1, 2));
  s.push(pii(2, 3));
  s.push(pii(3, 3));
  
  s.pop();
  auto elem = s.top();
  cout << elem.first << " " << elem.second << endl;
}