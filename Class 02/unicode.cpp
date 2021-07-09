#include <iostream>
#include <fcntl.h>
using namespace std;

int main(){
  auto SPADE = L"\u2660";
  auto HEART = L"\u2665";
  auto DIAMOND = L"\u2666";
  auto CLUB = L"\u2663";
  _setmode(_fileno(stdout), _O_U16TEXT);   
  wcout << SPADE << endl;
}