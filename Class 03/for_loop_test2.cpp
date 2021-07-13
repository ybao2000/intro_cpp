#include <iostream>
using namespace std;

int main(){
  int numbers[] = {1, 2, 3, 4, 5};  // any collection support :
  for(auto num : numbers) // this syntax is supported C11, C20
  {
    cout << num << endl;
  }
}