#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

//#include <tuple>

//#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

// ３点を通る円の半径を求める
double solve(int x1, int y1, int x2, int y2, int x3, int y3) {
  double A = (x3 - x2)*(x1*x1 - x2*x2 + y1*y1 - y2*y2);
  double B = (x2 - x1)* (x2*x2 - x3*x3 + y2*y2 - y3*y3);
  double C = 2*(x2-x1)*(y3-y2);
  double D = 2*(x3-x2)*(y2-y1);
  double E = 
  double F =
  double G =
  double H =
  double y = (A- B)/(C - D);
  return pow(x1 - x,2) + pow(y1 - y)
}

int main() {
  int N;
  cin >> N;
  double zahyo[N][2];
  for (int i = 0; i < N; i++) {
    cin >> zahyo[i][0] >> zahyo[i][1];
  }

  x1 = zahyo[0][0];
  y1 = zahyo[0][1];
  double result = 0.0;
  for (int i = 0; i < N; i++) {
    for (int j = i + 1; j < N; j++) {
      double r = pow(zahyo[i][0] - zahyo[j][0], 2) + pow(zahyo[i][1] - zahyo[j][1], 2);
      if (r == result) {
        x3 =zahyo[i][0]
        x3 =
        result = solve(x1,y1,x2,y2,x3,y3);
      }
      if (r >= result) {
        x1 =
        y1 =
        x2 =
        y2 =  
      }
      result = max(result, r);
      
      // cout << "result" << result << endl;
    }
  }

  
  cout << setprecision(7) << sqrt(result)*0.5 << endl;

}
