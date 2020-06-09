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
  int N, a, b, d, ans = 0, len;
  string s;
  cin >> N >> a >> b;

  rep(i, N){
    cin >> s >> d;
    if (d < a) len = a;
    else if (b < d) len = b;
    else len = d;
    if (s == "East"){
      ans += len;
    } else {
      ans -= len;
    }
  }
  if(ans == 0) print(ans);
  else if (ans > 0)  prints("East", ans);
  else prints("West", abs(ans));
}
