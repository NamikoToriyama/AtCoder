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
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

int main()
{
  int N, W, K;
  cin >> W >> N >> K;
  vector<int> w(N);
  vector<int> v(N);
  vector<vector<vector<ll>>> dp(N + 1, vector<vector<ll>>(W + 1, vector<ll>(K + 1, 0)));

  rep(i, N)
  {
    cin >> w[i] >> v[i];
  }

  for (int i = 0; i < N; i++)
  { // i番目のスクショを選ぶ場合
    for (int sum_w = 0; sum_w <= W; sum_w++)
    { // wはwidthの大きさ
      for (int k = 1; k <= K; k++)
      { // kは価値の大きさ
        if (sum_w - w[i] >= 0)
        {
          dp[i + 1][sum_w][k] = max(dp[i][sum_w][k], dp[i][sum_w - w[i]][k - 1] + v[i]);
        }
        else
        {
          dp[i + 1][sum_w][k] = dp[i][sum_w][k];
        }
      }
    }
  }

  cout << dp[N][W][K] << endl;
}
