#include <bits/stdc++.h>
using namespace std;

int main(){
  int *my_array;

  int my_size = 10;
  my_array = new int[my_size];

   for(int i=0; i<my_size; i++) {
    my_array[i] = 10 + i; // set the element
  }

  for(int i=0; i<my_size; i++){
    cout << my_array[i] << endl;  // get the element
  } 

  my_array = new int[20];
}