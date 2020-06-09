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
const double PI = 3.14159265359;

int main() {
  int N;
  cin >> N;
  vector<double> a(N);

  rep(i, N){
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());

  double ans = 0;
  int f = 1;
  rep(i, N){
    ans += (f*a[i]*a[i]*PI);
    f *= -1;
  }
  cout << setprecision(7) << ans << endl;

}
