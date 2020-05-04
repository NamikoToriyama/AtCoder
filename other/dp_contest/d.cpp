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
  ll N, D, D1;
  cin >> N >> D;
  D1 = D;
  int c2=0,c3=0,c5=0;
  while(D1%2==0){D1/=2;c2++;}
  while(D1%3==0){D1/=3;c3++;}
  while(D1%5==0){D1/=5;c5++;}

  if(D1 != 1){ // 2, 3, 5以外の素因数がある場合
    cout << 0.0 << endl;
    return 0;
  }

  int dx[6] = {0, 1, 0, 2, 0, 1};
  int dy[6] = {0, 0, 1, 0, 0, 1};
  int dz[6] = {0, 0, 0, 0, 1, 0};
  double dp[N][60][60][60];
  rep(i, N) rep(j, 2*N) rep(k, N) rep(l, N) dp[i][j][k][l] = 0.0;
  dp[0][0][0][0] = 1;

  rep(i, N+1){ // N回まわす
    rep(a, c2){
      rep(b, c3){
        rep(c, c5){
          rep(dice, 6){
            a+=dx[dice];
            b+=dy[dice];
            c+=dz[dice];
            dp[i][a][b][c]
              cout << endl;
          }
        }
      }
    }
  }
  
  cout << dp[N][c2][c3][c5] << endl;

}
