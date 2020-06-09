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
  int N, X;
  cin >> N >> X;
  vector<int> a(N);

  rep(i, N){
    cin >> a[i];
  }

  int ans = 0;
  for (int i = 0; i < N; ++i) {
    if (X & (1<<i)) { // i が bit に入るかどうか
        ans += a[i];
    }
  }
  print(ans);

}
