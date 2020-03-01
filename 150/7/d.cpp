#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long
#define pb push_back

int main() {
  int N, M, K;
  cin >> N >> M >> K;
  int friends[N][N];
  int a, b;
  rep(i, N){
    rep(j, N){
      if (i == j) friends[i][j] = 1;
      else friends[i][j] = 0;
    }
  }
  // 友達関係
  rep(i, M) {
    cin >> a >> b;
    friends[a-1][b-1] = 1;
    friends[b-1][a-1] = 1;
  }
  // ブロック関係
  rep(i, K) {
    cin >> a >> b;
    friends[a-1][b-1] = -1;
    friends[b-1][a-1] = -1;
  }

  rep(i, N){
    rep(j, N){
      cout << friends[i][j] << "  ";
    }
    cout << endl;
  }
  

}
