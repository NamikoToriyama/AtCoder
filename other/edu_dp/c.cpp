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
  int N;
  cin >> N;
  vector<vector<ll> > h(N, vector<ll>(3));
  vector<vector<ll> > dp(N+1, vector<ll>(3, 0));

  rep(i, N){
    cin >> h[i][0] >> h[i][1] >> h[i][2];
  }

  dp[0][0] = 0;
  dp[0][1] = 0;
  dp[0][2] = 0;
  for(int i = 0; i < N; i++){
    for (int j = 0; j < 3; ++j) {
      for (int k = 0; k < 3; ++k) {
          if (j == k) continue;
          dp[i + 1][k] = max(dp[i + 1][k], dp[i][j] + h[i][k]);
      }
    }
  }
  
  cout << max(dp[N][0], max(dp[N][1], dp[N][2])) << endl;

}
