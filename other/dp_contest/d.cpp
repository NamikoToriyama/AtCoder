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
  int N, D;
  ll W=0;
  cin >> N >> D;
  // vector<ll> p(N);
  vector<vector<ll> > dp(N+10, vector<ll>(600+10, 0));
  // vector<ll> cnt(100*100+10, 0);

  for (int dice = 1; dice <= 6; dice++){ // 初期値を代入
    dp[1][dice]++;
  }
  
  for(int i = 1; i <= N; i++){
    for(int j = 0; j <= 600; j++){
      if(dp[i][j]==0) continue;
      for (int dice = 1; dice <= 6; dice++) {
        dp[i+1][j+dice] += dp[i][j] + 1;
      }
    }
  }
  rep(i, N+1){
    rep(j, 30){
      cout << dp[i][j] << " " ;
    }
    cout << endl;
  }

  double ans = 0, sum=0;
  for(int i = 1; i <= 600; i++){
    if(i%D==0) ans+=dp[N][i];
    sum += dp[N][i];
  }
  cout << sum << " " << ans<< endl;
  
  cout<< setprecision(7) << ans/sum << endl;

}
