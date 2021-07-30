#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

int main(){
  // vector<int> v;
  // v.push_back(1);
  // v.push_back(2);
  // for(auto elem : v){
  //   cout << elem << endl;
  // }
  int N;
  cin >> N;
  vector<pair<int, int>> v_tx;
  for(int i=0; i<N; i++){
    int t, x;
    cin >> t >> x;
    v_tx.push_back(pair<int, int>(t, x));
  }
  // vector also supports index
  cout << v_tx[0].first << endl;

  sort(begin(v_tx), end(v_tx));

  for(auto elem : v_tx){
    cout << elem.first << " " << elem.second << endl;
  }

  pii my_pairs[100];
  pii *my_pairs2 = new pii[100];
}