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

const long long INF = 1LL << 60;


int main() {
  int N, W;
  cin >> N >> W;
  vector<ll> w(N);
  vector<ll> v(N);
  vector<vector<ll> > dp(N+10, vector<ll>(W+10, 0));

  rep(i, N){
    cin >> w[i] >> v[i];
  }

  for(int i = 0; i < N; i++){
    for (int sum_w = 0; sum_w <= W; sum_w++) {
      // i 番目の品物を選ぶ場合
      if (sum_w - w[i] >= 0) {
          dp[i+1][sum_w] = max(dp[i+1][sum_w], dp[i][sum_w - w[i]] + v[i]);
      }

      // i 番目の品物を選ばない場合
      dp[i+1][sum_w] = max(dp[i+1][sum_w], dp[i][sum_w]);
    }
  }

  // rep(i, 7){
  //   rep(j, 15){
  //     cout << dp[i][j] << " " ;
  //   }
  //   cout << endl;
  // }
  
  cout << dp[N][W] << endl;

}
