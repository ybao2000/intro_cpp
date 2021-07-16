#include <iostream>
using namespace std;

int main(){
  const int size = 5;
  // a as array type of int
  int a[size];
  for (int i=0; i<size; i++){
    a[i] = i*i;    
  }
  for (int i=0; i<size; i++){
    cout << a[i] << endl;   
  }
  cout << "type a: " << typeid(a).name() << ", size: " << sizeof(a) << endl;

  // b as array type of int
  int b[] = {1, 2, 3, 4, 5};
    cout << "type b: " << typeid(b).name() << ", size: " << sizeof(b) << endl;

  // c is a point of int
  int *c = new int[size];
    for (int i=0; i<size; i++){
    c[i] = i*i;    
  }
      cout << "type c: " << typeid(c).name() << ", size: " << sizeof(c) << endl;
}