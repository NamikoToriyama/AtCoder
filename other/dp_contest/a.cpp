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
  cin >> N;
  vector<ll> h(N);
  ll dp[N];

  rep(i, N){
    cin >> h[i];
    dp[i] = -1;
  }
  dp[0] = 0;
  dp[1] = abs(h[1]-h[0]);
  for(int i = 2; i < N; i++){
    dp[i] = min(abs(h[i]-h[i-1]), abs(h[i]-h[i-2]));
  }
  cout << dp[N-1] << endl;

}
