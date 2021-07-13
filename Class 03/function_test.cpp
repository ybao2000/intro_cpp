#include <iostream>
#include <cmath>
#include "function_test.h"

using namespace std;



int main(){
  
    double base = 5.0;
    double h = 6;
    cout << area_triangle(base, h) << endl;
  
    double x, y;
    x = 1;
    y = 2;
    cout << x + y << endl;
    
  double a = 3, b = 4, c = 5;
  cout << area_triangle(a, b, base) << endl;

}

// write function to calculate the area of the triangle
double area_triangle(double base, double height){
  return base * height /2.0;
}

// heron's formula
// l = (a+b+c)/2
// area = sqrt(l*(l-a)*(l-b)*(l-c))
double area_triangle(double a, double b, double c){
  double l = (a + b + c)/2.0;
  return sqrt(l*(l-a)*(l-b)*(l-c));
}
