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
  int N, M;
  cin >> N >> M;
  vector<int> a(3, 0);
  vector<bool> flag(3, true);
  bool check = true;
  int k, c;

  rep(i, M){
    cin >> k >> c;
    if (flag[k-1]) {
      flag[k-1] = false;
      a[k-1] = c;
    } else if (a[k-1] == c){// これは大丈夫
      continue;
    } else {
      check = false;
    }
  }

  
  // cout << check << endl;
  if (check){
    if (a[0] == 0) {
      if (N==1) {
        cout << a[0] << endl;
         return 0;
      } else if (flag[0]){
        a[0] = 1;
      } else {// 0から始まっちゃうとき
        cout << -1 << endl;
        return 0;
      }
   }
    rep(i, N){
      cout << a[i];
    }
    cout << endl;
  } else {
    cout << -1 << endl;
  }

}
