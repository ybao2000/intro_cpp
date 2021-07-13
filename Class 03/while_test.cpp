#include <iostream>
#include <ctime>
using namespace std;

int main(){
   srand((unsigned)time(NULL)); 
    int num = rand() % 100+1; // range is [1, 10]
    int your_guess = -1;
    // while(your_guess != num){
    //   cout << "guess the number [1, 10]: ";
    //   cin >> your_guess;
    //   // I want to give a hint,
    //   // if your input is small
    // }
    // cout << "Bingo";
    while(true) {  // infinite loop!
      cout << "guess the number [1, 10]: ";  
      cin >> your_guess;
      if (your_guess > num){
        cout << "Your number is too big" << endl;
      }
      else if(your_guess < num){
        cout << "Your number is too small" << endl;
      }
      else{
        cout << "Bingo";
        break;  // this is the exit
      }
    }
}