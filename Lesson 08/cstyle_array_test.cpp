#include <bits/stdc++.h>
using namespace std;

int main(){
  int my_size = 10;
  int my_array[my_size];  // define c-style array
  for(int i=0; i<my_size; i++) {
    my_array[i] = 10 + i; // set the element
  }

  for(int i=0; i<my_size; i++){
    cout << my_array[i] << endl;  // get the element
  }
}