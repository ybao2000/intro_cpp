#include <bits/stdc++.h>
using namespace std;

int main(){
  const int my_size = 10;
  array<int, my_size> my_array;  // c++ array class
  
  for(int i=0; i<my_array.size(); i++) {
    my_array[i] = 10 + i; // set the element
  }

  for(int i=0; i<my_size; i++){
    cout << my_array[i] << endl;  // get the element
  }  
}