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
  int N, ans;
  cin >> N;
  int km = N/1000;

  if(N < 100) ans = 0;
  else if (N <= 5000) ans = N/100;
  else if (N <= 30000) ans = km + 50;
  else if (N <= 70000) ans = ( N/1000 - 30) / 5 + 80;
  else ans = 89;
  
  cout << setfill('0') << setw(2) << ans << endl;
}
