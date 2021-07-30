#include <bits/stdc++.h>
using namespace std;

int main(){
  deque<string> dq;
  dq.push_back("Frank");
  dq.push_front("Alpha");
  dq.push_back("beta");
  cout << dq.front() << " " << dq.back() << endl;
  dq.pop_back();
  dq.pop_front();
   cout << dq.front() << " " << dq.back() << endl;
}