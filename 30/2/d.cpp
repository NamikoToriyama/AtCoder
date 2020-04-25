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
const int MAX_V = 100100;

int main() {
  ll N, W, MAX_V = 0, MAX_W=0;
  cin >> N >> W;
  ll w[N];
  ll v[N];

  rep(i, N){
    cin >> v[i] >> w[i];
    MAX_V = max(MAX_V, v[i]);
    MAX_W = max(MAX_W, w[i]);
  }

  // 提出時はelse ifでつなげる
 if(MAX_W <= 1000){ // テストケース2の場合
    vector<vector<ll> > dp(N+1, vector<ll>(W+1, 0));
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
    // for(int i = 0; i < N; i++){
    //   for (int sum_w = 0; sum_w <= W; sum_w++) {
    //     cout << dp[i+1][sum_w] << " ";
    //   }
    //   cout << endl;
    // }
  
    cout << dp[N][W] << endl;

  } else if(MAX_V <= 1000) { // テストケース3の場合
    MAX_V = 100*1000;
    vector<vector<ll> > dp(N+10, vector<ll>(MAX_V+1, INF));
     dp[0][0] = 0;
    for(int i = 0; i < N; i++){
      for (int sum_v = 0; sum_v <= MAX_V; sum_v++) {
        // i 番目の品物を選ぶ場合
        if (sum_v - v[i] >= 0) {
          dp[i+1][sum_v] = min(dp[i+1][sum_v], dp[i][sum_v - v[i]] + w[i]);
        }
        // i 番目の品物を選ばない場合
        dp[i+1][sum_v] = min(dp[i+1][sum_v], dp[i][sum_v]);
      }
    }
    
    // 最適値の出力
    long long res = 0;
    for (int sum_v = 0; sum_v < MAX_V; ++sum_v) {
        if (dp[N][sum_v] <= W) {
          res = sum_v;
          // cout << dp[N][sum_v] << ":" << sum_v << " ";
        }
    }
    cout << res << endl;

  } else if(N <= 30) { // テストケース1の場合 // 拝借: https://atcoder.jp/contests/abc032/submissions/12291773
      vector<pair<ll,ll> > ps(1<<N/2);
      // 前半を全列挙
      int n2 = N/2;
      for(int i=0; i<1<<n2;i++) // ビット探索(2^n)
      {
        ll sw=0, sv=0;
        rep(j, n2)
        {
          if(i>>j & 1)
          {
            sw+=w[j];
            sv+=v[j];
          }
          ps[i] = make_pair(sw,sv);
        }
      }
      // psには前半の全通りのsumw, sumvが格納されている
 
      // 無駄な要素を切り除く
      sort(ps.begin(), ps.end()); // wの小さい順
      int m=1;
      for(int i=0; i<1<<n2; i++)
      {
        // weightは大きいがvalueの小さい者を除く
        if(ps[m-1].second<ps[i].second)
        {
          ps[m++]=ps[i];
        }
      }
 
      // 後半の全列挙
      ll ans=0;
      for(int i=0; i<1<<(N-n2);i++)
      {
        ll sw=0, sv=0;
        rep(j, N-n2)
        {
          if(i>>j & 1)
          {
            sw+=w[n2+j];
            sv+=v[n2+j];
          }
        }
        if(sw<=W) //重さの条件をクリアしたら
        {
          // tvは既存のpsの中で一番valueが大きいもの
          ll tv=(lower_bound(ps.begin(), ps.begin()+m, make_pair(W-sw, INF))-1)->second;
          ans=max(ans, sv+tv);
        }
      }
      cout << ans << endl;
  }
  
}
