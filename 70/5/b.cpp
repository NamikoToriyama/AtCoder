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
#define ll long long int
#define pb push_back

int main() {
  int h, w;
  string s;
  cin >> h >> w;
  int xy[h][w];
  rep(i, h){
    cin >> s;
    rep(j, w){
      if(s[j] == '#') xy[i][j] = -1;
      else xy[i][j] = 0;
    }
  }

  int dx[3] = {1, 0, -1}, dy[3] = {1, 0, -1};
  rep(i, h){
    rep(j, w){
      if(xy[i][j] == -1){ // mineの時
        rep(x, 3){
          rep(y, 3){
            if (x==1 && y==1) continue;
            int nx = i + dx[x];
            int ny = j + dy[y];
            if(-1 < nx && nx < h && -1 < ny && ny < w && xy[nx][ny] != -1){
              xy[nx][ny]++;
            }
          }
        }
      }
    }
  }

  // 出力
  rep(i, h){
    rep(j, w){
      if(xy[i][j] == -1 ) cout << "#";
      else cout << xy[i][j];
    }
    cout << endl;
  }
}
