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
  int N, K;
  cin >> N >> K;
  vector<ll> h(N);
  vector<ll> dp(N+K, INF);

  rep(i, N){
    cin >> h[i];
  }

  dp[0] = 0;
  for(int i = 0; i < N; i++){
    for(int j = i+1; j <= K+i; j++){ // とりあえずKまで代入しちゃう
      dp[j] = min(dp[j], dp[i] + abs(h[j]-h[i]));
    }
  }
  // rep(i, N){
  //   cout << dp[i] << " " ;
  // }
  
  cout << dp[N-1] << endl;

}
