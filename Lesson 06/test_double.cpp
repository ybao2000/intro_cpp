#include <iostream>
#include <string>
using namespace std;

int main(){
  float f = 1.0f;
  double d = 1.0; // in reality, double never has maximum/minimum, you only need to care about precision
  cout << "size of float: " << sizeof(f) << ", size of double: " << sizeof(d) << endl;
}