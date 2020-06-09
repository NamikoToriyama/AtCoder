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
#define r_rep(i, n) for(int i = (int)n-1; i >= 0; i--)
#define ll long long int
#define pb push_back
const long long MOD = 1000000007;
const long long INF = 1LL << 60;

int main() {
  double n, m;
  cin >> n >> m;
  if(n >= 12) n -= 12;
  double mm = m/60.*360.;
  double h = n/12.*360.+m/60.*360./12.;
  double a = abs(h-mm);
  cout << setprecision(7) << min(a, abs(360-a)) << endl;
}
