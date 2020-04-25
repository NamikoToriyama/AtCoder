#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>

//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

const long long INF = 1LL << 60;
const int MAX_V = 100100;

int main() {
  ll N, W;
  cin >> N >> W;
  vector<ll> w(N);
  vector<ll> v(N);
  vector<vector<ll> > dp(N+10, vector<ll>(MAX_V+1, INF));

  rep(i, N){
    cin >> w[i] >> v[i];
  }
  dp[0][0] = 0;
  for(int i = 0; i < N; i++){
    for (int sum_v = 0; sum_v <= MAX_V; sum_v++) {
      // i 番目の品物を選ぶ場合
      if (sum_v - v[i] >= 0) {
        dp[i+1][sum_v] = min(dp[i+1][sum_v], dp[i][sum_v - v[i]] + w[i]);
      }

      // i 番目の品物を選ばない場合
      dp[i+1][sum_v] = min(dp[i+1][sum_v], dp[i][sum_v]);
    }
  }
  
   // 最適値の出力
  long long res = 0;
  for (int sum_v = 0; sum_v < MAX_V; ++sum_v) {
      if (dp[N][sum_v] <= W) res = sum_v;
  }
  cout << res << endl;
}
