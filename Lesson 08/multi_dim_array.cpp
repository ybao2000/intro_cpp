#include <bits/stdc++.h>
using namespace std;

int main(){
  // int size_x = 5;
  // const int size_y = 6;
  // int my_array[size_x][size_y];

  // auto my_array2 = new int[size_x][size_y];

  // // common way in CCC contest, memory is not quite restricted
  // const int MAX_M = 2000;
  // const int MAX_N = 2000;
  // int my_array3[MAX_M][MAX_N];
  int M, N;
  // cin >> M >> N;
  M = 5;
  N = 5;
  int **p = new int*[M];
  for(int i=0; i<M; i++){
    p[i] = new int[N];   // assign memory for pointers
    for(int j=0; j<N; j++){
      p[i][j] = i * j;   // set element
    }
  }

  for(int i=0; i<M; i++){
    for(int j=0; j<N; j++){
      cout << p[i][j] << " ";
    }
    cout << endl;
  } 
}