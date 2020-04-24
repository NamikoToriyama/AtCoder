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
  vector<int> h(N);
  ll dp[N+2];

  rep(i, N){
    cin >> h[i];
    dp[i] = INF;
  }

  dp[0] = 0;
  dp[1] = abs(h[0] - h[1]);
  rep(i, N){
    dp[i+1] = min(dp[i+1], dp[i] + abs(h[i]-h[i+1]));
    dp[i+2] = min(dp[i+2], dp[i] + abs(h[i]-h[i+2]));
  }

  
  cout << dp[N-1] << endl;

}
