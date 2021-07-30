#include <bits/stdc++.h>
using namespace std;

bool contains(string a, string b){
  int n_a = a.length();
  int n_b = b.length();
  for(int i=0; i<=n_a-n_b; i++){
    string sa = a.substr(i, n_b);
    if(sa == b) return true;
  }
  return false;
}

int main() {
  string T;
  string S;
  cin >> T;
  cin >> S;
  bool bFound = false;
  for(int i=0; i<S.length();  i++){
    string s2 = S.substr(i) + S.substr(0, i);
    if(contains(T, s2)) {
      bFound = true;
      break;
    }
  }
  cout << (bFound ? "yes" : "no") << endl;
}