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
  int N = 0, M, x, y;
  cin >> N >> M;
  int r[12][12] = {0};
  // 繋がり
  rep(i, M){
    cin >> x >> y;
    x--; y--;
    r[x][y]  = 1;
    r[y][x]  = 1;
  }

  // {0, 1, ..., n-1} の部分集合の全探索
  int ans = 1;
  for (int bit = 0; bit < (1<<N); ++bit)
  {
      bool flag = true;
      /* きちんとできていることを確認してみる */
      // bit の表す集合を求める
      vector<int> S;
      for (int i = 0; i < N; ++i) {
          if (bit & (1<<i)) { // i が bit に入るかどうか
              S.push_back(i);
          }
      }
      if(S.size() == 1) continue;
      

      for (int i = 0; i < (int)S.size(); ++i) {
        for (int j = i+1; j < (int)S.size(); ++j) {
          if(r[S[i]][S[j]] == 0) flag = false;
        }
      }
      if(flag) {
        // // bit の表す集合の出力
        // cout << bit << ": {";
        // for (int i = 0; i < (int)S.size(); ++i) {
        //     cout << S[i] << " ";
        // }
        // cout << "}" << endl;
        ans = max(ans, (int)S.size());
      }
  }
  print(ans);

}
