#include <bits/stdc++.h>  // this is supported by gnu c++
using namespace std;

int main(){
  map<int, string> map_a;
  map_a[1] = "frank";
  map_a[2] = "austin";
  map_a[3] = "alex";


  map_a[6] = "apple";
  map_a.insert(pair<int, string>(7, "plum"));

  map_a.erase(1);
  
  for(auto elem : map_a){
    cout << elem.first << " " << elem.second << endl;
  }

}