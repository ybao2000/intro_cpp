#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

int main() {
  int N;
  cin >> N;
  int T, X;
  vector<pii> v_tx;
  for(int i=0; i<N; i++){
    cin >> T >> X;
    pii tx = make_pair(T, X);
    v_tx.push_back(tx);
  }
  sort(begin(v_tx), end(v_tx));
  int T2, X2;
  T = v_tx[0].first;
  X = v_tx[0].second;
  double speed_max = 0;
  for(int i=1; i<N; i++){
    T2 = v_tx[i].first;
    X2 = v_tx[i].second;
    double speed = abs(((double)(X2-X))/(T2-T));
    if(speed > speed_max) speed_max = speed;
    T = T2;
    X = X2;
  }
  cout << fixed << setprecision(6) << speed_max << endl;
}