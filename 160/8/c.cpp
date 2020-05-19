#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <map>

//#include <bits/stdc++.h>
using namespace std;
#define print(x) cout<<(x)<<endl
#define prints(x, y) cout<<(x)<<" "<<(y)<<endl
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

int main() {
  long double a, b, h, m;
  cin >> a >> b >> h >> m;
  long double pi = acos(-1);
  long double r = 2*(h/12+m/60/12 - m/60);
  long double theta = r*pi;
  long double ans = a*a + b*b - 2*a*b*cos(theta);

  cout << setprecision(10) << sqrt(ans) << endl;

}