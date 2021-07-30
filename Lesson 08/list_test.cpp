// #include <iostream>
// #include <string>
#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

int main(){
  list<pii> my_list;
  int N;
  cin >> N;

  for(int i=0; i<N; i++){
    int t, x;
    cin >> t >> x;
    my_list.push_back(pair<int, int>(t, x));
  }

    // cout << my_list[0].first << endl;

  // sort(begin(my_list), end(my_list));
  my_list.sort();

  for(auto elem : my_list){
    cout << elem.first << " " << elem.second << endl;
  }
}