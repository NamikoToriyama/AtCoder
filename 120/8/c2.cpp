#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <map>

//#include <bits/stdc++.h>
using namespace std;
#define print(x) cout<<(x)<<endl
#define prints(x, y) cout<<(x)<<" "<<(y)<<endl
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define r_rep(i, n) for(int i = (int)n-1; i >= 0; i--)
#define ll long long int
#define pb push_back
const long long MOD = 1000000007;
const long long INF = 1LL << 60;

int main() {
  int n, M, k;
  cin >> n >> M;
  vector<vector<int> > denkyu(M);
  vector<int> p(M);

  rep(i, M){
    cin >> k;
    vector<int> s(k);
    rep(j, k){
      cin >> s[j];
      s[j]--;
    }
    denkyu[i] = s;
  }
  rep(i, M){
    cin >> p[i];
  }

  int ans = 0, cnt;
  vector<vector<int> > candidate;
  // {0, 1, ..., n-1} の部分集合の全探索
  for (int bit = 0; bit < (1<<n); ++bit)
  {
      // bit の表す集合を求める
      vector<int> S;
      for (int i = 0; i < n; ++i) {
          if (bit & (1<<i)) { // i が bit に入るかどうか
              S.push_back(i);
          }
      }

      // bit の表す集合の出力
      vector<int> c;
      rep(i, M){ // 配列を見ていく
        cnt = 0;
        rep(j, denkyu[i].size()){  
          for (int k = 0; k < (int)S.size(); ++k) {
            if(denkyu[i][j] == S[k]) {
              cnt++;
              break;
            }
          }
        }
        c.push_back(cnt%2);
      }
      candidate.push_back(c);
  }

  rep(i, candidate.size()){
    if(p == candidate[i]) ans++;
  }
  print(ans);
}
