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
const ll MOD = 1000000007;
 
int main() {
  int N, M;
  cin >> N >> M;
  ll dp[N+2], h;
  dp[0] = 1;
  dp[1] = 1;

  rep(i, M){
    cin >> h;
    dp[h] = -1;
  }

  for(int i = 2; i < N+1; i++){
    if(dp[i]==-1) continue;
    else if (dp[i-1] == -1) dp[i] = dp[i-2];
    else if (dp[i-2] == -1) dp[i] = dp[i-1];
    else dp[i] = dp[i-1] + dp[i-2];
    dp[i] %= MOD;
  }

  if (dp[N] == -1) dp[N] = 0; 
  cout << dp[N]%MOD << endl;

}
