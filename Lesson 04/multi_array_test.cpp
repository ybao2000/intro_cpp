#include <iostream>
using namespace std;

int main(){
  const int size = 5;
  int a[size][size];

  for (int i=0; i<size; i++){
    for(int j=0; j<size; j++){
      a[i][j] = i * j;
    }
  }

    for (int i=0; i<size; i++){
    for(int j=0; j<size; j++){
      cout << a[i][j] << "  ";
    }
    cout << endl;
  }

  int b[][4] = {
    {1, 2, 3, 4}, 
    {2, 3, 4, 5}, 
    {3, 4, 5, 6}
  };

  for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
      cout << b[i][j] << "  ";
    }
    cout << endl;
  }
}