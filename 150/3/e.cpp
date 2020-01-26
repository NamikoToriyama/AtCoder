#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

//#include <tuple>

//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long
#define pb push_back

int main() {
  int h, n;
  cin >> h >> n;
  vector<int> a(n), b(n);

  rep(i, n) {
    cin >> a[i] >> b[i];
  }

  vector<ll> dp(h + 1, 1LL<<60);
  dp[0] = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < h; j++) {
      // hpがjにおいて、ダメージa[i]を与えた時のhpを求める
      int k = j + a[i];
      // もしそれ以上の値になる場合は最大値にする
      if (k > h) k = h;
      // もともと入っている値とダメージを与えた場合を比較する
      dp[k] = min(dp[k], dp[j] + b[i]);
    }
  }
  cout << dp[h] << endl;
}
