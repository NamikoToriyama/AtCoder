#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <map>

//#include <bits/stdc++.h>
const long long INF = 1LL << 60;

using namespace std;
#define print(x) cout<<(x)<<endl
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

int main() {
  int N, M, X;
  cin >> N >> M >> X;
  int a[N][M];
  vector<int> c(N);

  rep(i, N){
    cin >> c[i];
    rep(j, M){
      cin >> a[i][j];
    }
  }

  // 購入できる場合
  ll answer = INF, tmp;
  bool flag = true;
  // {0, 1, ..., n-1} の部分集合の全探索
    for (int bit = 0; bit < (1<<N); ++bit)
    {
        // bit の表す集合を求める
        vector<int> S;
        vector<ll> ans(M);
        flag = true;
        tmp = 0;
        for (int i = 0; i < N; ++i) {
            if (bit & (1<<i)) { // i が bit に入るかどうか
                S.push_back(i);
            }
        }

        // bit の表す集合の出力
        for (int i = 0; i < (int)S.size(); ++i) {
          rep(j, M){
            ans[j] += a[S[i]][j];
          }
          tmp += c[S[i]];
        }
        
        rep(j, M){
          if(ans[j] < X){
            flag = false;
            break;
          }
        }
        if(flag){
          answer = min(answer, tmp);
        }
    }

    if(answer == INF) {
      print(-1);
      return 0;
    }
  

  print(answer);

}
