#include <bits/stdc++.h>
using namespace std;

class Geometry {
public:
  static int count;
  Geometry() {
    count++;
  }
};

int Geometry::count = 0;

int main() {
  Geometry g1 = Geometry();
  cout << Geometry::count << endl;
  Geometry g2 = Geometry();
    cout << Geometry::count << endl;
}