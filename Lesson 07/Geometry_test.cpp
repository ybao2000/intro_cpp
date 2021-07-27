#include <iostream>
#include <cmath>

using namespace std;

class Geometry {
  public:
    virtual double area() = 0;
};

class Triangle: public Geometry {
  public:
    static double magic_number;
    double _a, _b, _c;
    Triangle(double a, double b, double c){
      _a= a;
      _b = b;
      _c = c;
    }
    static double area(double a, double b, double c){
      double l = (a+b+c)/2;
      return sqrt(l*(l-a)*(l-b)*(l-c));
    }

    double area(double base, double height){
      return base * height/2;
    }

    double area() { 
      return 0;
    }
};

class Rectangle: public Geometry {
  public:
    Rectangle(double a, double b){
      _a = a;
      _b = b;
    }
    double _a, _b;

    virtual double area(){
      return _a * _b;
    }
};

class Square: public Rectangle {
  public:
    Square(double a)
    : Rectangle(a, a){
    }

    // double area() {
    //   return _a * _a;
    // }
};

double Triangle::magic_number;

int main(){
  Square s = Square(5.0);
  cout << s.area() << endl;

  // Geometry g1 = Geometry();
  cout << Triangle::area(3, 4, 5) << endl;
  Triangle t1 = Triangle(3, 4, 5);
  cout << t1.area(3, 4, 5) << endl;
  cout << t1.magic_number << endl;
}

