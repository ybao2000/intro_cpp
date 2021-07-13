#include <iostream>
#include <ctime>
using namespace std;

int main()
{
  // randomly generate a mark from 0 - 100, according to the mark, the teacher give a grade A+, A, ..., D, F
  // A+ : 100 - 95
  // A  : 94: 90
  // A- : 89 : 85
  // B+ : 84 : 80
  // B :  79 : 75
  // B- : 74 : 70
  // C+ : 69: 65
  // C : 64 : 60
  // C- : 59 : 55
  // D: 54 : 50
  // F: 49-
  srand((unsigned)time(NULL)); // generate a seed based on time
  // cout << rand() << endl;       // rand() generaet a random integer
  // we need to convert a random integer => [0, 100]
  int mark = rand() % 101; // how to get an integer range [0, 100]
  string grade;
  if (mark >= 95)
  {
    grade = "A+";
  }
  else if (mark >= 90)
  {
    grade = "A";
  }
  else if (mark >= 85)
  {
    grade = "A-";
  }
  else if (mark >= 80)
  {
    grade = "B+";
  }
  else if (mark >= 75)
  {
    grade = "B";
  }
  else if (mark >= 70)
  {
    grade = "B=";
  }
  else if (mark >= 65)
  {
    grade = "C+";
  }
  else if (mark >= 60)
  {
    grade = "C";
  }
  else if (mark >= 55)
  {
    grade = "C-";
  }
  else if (mark >= 55)
  {
    grade = "D";
  }
  else
  {
    grade = "F";
  }
  cout << "your mark is " << mark << endl;
  cout << "your grade is " << grade << endl;
}