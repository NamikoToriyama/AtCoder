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

int main() {
  int N;
  ll W=0;
  cin >> N;
  vector<ll> p(N);
  vector<vector<ll> > dp(N+10, vector<ll>(100*100+10, 0));
  vector<ll> cnt(100*100+10, 0);


  rep(i, N){
    cin >> p[i];
    W += p[i];
  }

  for(int i = 0; i < N; i++){
    for (int sum_w = 0; sum_w <= W; sum_w++) {
      // i 番目の品物を選ぶ場合
      if (sum_w - p[i] >= 0) {
          dp[i+1][sum_w] = max(dp[i+1][sum_w], dp[i][sum_w - p[i]] + p[i]);
      }

      // i 番目の品物を選ばない場合
      dp[i+1][sum_w] = max(dp[i+1][sum_w], dp[i][sum_w]);
      cnt[dp[i+1][sum_w]]++;
    }
  }

  int ans = 0;
  for(ll n: cnt){
    if(n>0) ans++;
  }
  
  cout << ans << endl;
}
