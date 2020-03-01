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
  vector<vector<int> > a(3, vector<int>(3));
  rep(i, 3){
    rep(j, 3){
      cin >> a[i][j];
    }
  }
  int N;
  cin >> N;
  int b;
  vector<vector<bool> > c(3, vector<bool>(3, false));
  rep(i, N){
    cin >> b;
    rep(i, 3){
      rep(j, 3){
        if (a[i][j]==b){
          c[i][j] = true;
        }
      }
   }
  }

  bool flag =false;
  int cnt = 0;
  // 横のビンゴをみていく
  rep(i, 3){
    cnt = 0;
      rep(j, 3){
        if(c[i][j]) cnt++;
      }
    if (cnt == 3) flag = true;
  }
  // たてのビンゴ
  rep(i, 3){
    cnt = 0;
      rep(j, 3){
        if(c[j][i]) cnt++;
      }
    if (cnt == 3) flag = true;
  }
  // 斜めのビンゴ
  if (c[0][2] == 1 && c[1][1] == 1 && c[2][0] == 1) flag = true;
  if (c[0][0] == 1 && c[1][1] == 1 && c[2][2] == 1) flag = true;
  
  // rep(i, 3){
  //   rep(j, 3){
  //     cout << c[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  // cout << c[0].at(2) << c[1][1] << c[2][0] << endl;
  // cout << c[2][0] << c[1][1] << c[0][2] << endl;
  if(flag){
    cout << "Yes" << endl;
  } else{
    cout << "No" << endl;
  }

}
