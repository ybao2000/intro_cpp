#include <iostream>
#include <string>
using namespace std;

int main(){
  string books;
  cin >> books;
  int nL=0, nM=0, nS=0;
  for(auto book : books){
    if (book == 'L') nL++;
    else if(book == 'M') nM++;
    else nS++;
  }
  int misML=0, misSL=0, misLM=0, misSM=0, misLS=0, misMS=0;
  for(int i=0; i<nL+nM+nS; i++){
    if(i < nL)  // L section
    {
      if(books[i] == 'M') misML++;
      else if(books[i] == 'S') misSL++;
    } 
    else if (i < nL + nM)  // M section
    {
      if(books[i] == 'L') misLM++;
      else if (books[i] == 'S') misSM++;
    }
    else {  // S section
      if(books[i] == 'L') misLS++;
      else if(books[i] == 'M') misMS++;
    }
  }
  // we only have 2 possibilities:
  // one is pair
  // another one is rotation
  int count = 0;
  int pairLM = misLM < misML ? misLM : misML;
  count += pairLM;
  misLM -= pairLM;
  misML -= pairLM;
  int pairLS = misLS < misSL ? misLS : misSL;
  count += pairLS;
  misLS -= pairLS;
  misSL -= pairLS;
  int pairMS = misMS < misSM ? misMS : misSM;
  count += pairMS;
  misMS -= pairMS;
  misSM -= pairMS;
  // the remain
  int rem = misLM + misML + misLS + misSL + misMS + misSM;
  count += rem * 2 / 3;
  cout << count << endl;
}