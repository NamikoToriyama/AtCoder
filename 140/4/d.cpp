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
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long
#define pb push_back

int main() {
  double a, b, c;
  static const double pi = 3.141592653589793;
  double ans, y;
  cin >> a >> b >> c;
  // 体積を辺の長さに戻す
  double x = c/a/a;

  double s = a*b/2.0;
  // 水の面積
  double sa = x*a;
  //  cout << x << " " << s << " " << sa << endl;

  if(sa <= s){ // 三角形になる時
    y = sa*2.0/b;
    // cout << y <<" " <<  b <<" "<< atan(y/b) << endl;
    ans = 90.0 - atan(y/b)*180/pi;
  } else { // 四角形になる時
    y = sa*2.0/a - b;
    // cout << y << endl;
    ans = 90.0 - atan(a/(b-y))*180/pi;
  }
  
  cout << setprecision(7) << ans << endl;

}
