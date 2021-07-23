#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

// ll gcd(ll a, ll b){
//   ll r = a % b;
//   while (r > 0){
//     a = b;
//     b = r;
//     r = a % b;
//   }
//   return b;
// }

int main() {
  int n;
  cin >> n;
  ll a, g;
  // step 1 => get the gcd for all numbers
  for(int i=0; i<n; i++){
    cin >> a;
    if (i==0) {
      g = a;
    }
    else if(g > 1){
      g = __gcd(g, a);
    }
  }
  // step 2=> iterate to get the count
  int icount = 0;
  for (ll i=1; i*i<=g; i++){
    if(g%i == 0){ // you find the factor
      if(i*i==g) {
        icount++;
      }
      else {
        icount += 2;
      }
    }
  }
  cout << icount << endl;
}