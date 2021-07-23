#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  int heights[10001];
  int widths[10000];
  int N;
  cin >> N;
  for(int i=0; i<N+1; i++){
    cin >> heights[i];
  }
  for(int i=0; i<N; i++){
    cin >> widths[i];
  }
  double area = 0;
  for(int i=0; i<N; i++){
    area += (heights[i]+heights[i+1])*widths[i]/2.0;
  }

  // for this problem, you only need 1 precision 
  // xxxxx.5, xxxxxx
  cout << fixed << setprecision(1) << area << endl;
}