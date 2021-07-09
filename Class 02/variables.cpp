#include <iostream>
using namespace std;

int main(){
  // all these are integers
  char my_char; // i declare a variable called my_char which has type of char
  my_char = 'A';  // assign
  cout << my_char << endl;

  short my_short = 120; // you can declare and assign together
  cout << my_short << endl;

  int my_int = 429496729;
  cout << my_int << endl; 

  long long my_long = 4294967296;
  cout << my_long << endl;

  // floats
  float my_float = 3.1415629202020202020;
  cout << my_float << endl;

  double my_double = 3.1415629202020202020;
  cout << my_double << endl;

  bool my_bool = false;
  cout << my_bool << endl;

  wchar_t my_wide_char = L'A';
  cout << my_wide_char << endl;

  auto my_val = 1;
  cout << my_val << endl;

  int my_val_2 = -1;  // int itself is signed, so you have to put signed
  cout << my_val_2 << endl;

  auto big_number = (long long)(2e9);
  long long threshold = (long long)(1e9)+7;
  cout << big_number % threshold << endl;
}