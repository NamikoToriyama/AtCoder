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
  int N;
  cin >> N;
  vector<int> a(N);
  int max_h = 0;
   
  rep(i, N){
    cin >> a[i];
    max_h = max(max_h, a[i]);
  }

  // 繰り返して伸ばす
  bool flag = true;
  int min_a;
  int ans = 0;
  while(flag){
    rep(i, N) {
      min_a = max_h;
      if(a[i] > 0){
        int k = N;
        for(int j = i; j < N; j++){
          if (a[j] == 0) {
            k = j;
            break;
          }
          min_a = min(min_a, a[j]);
        }
        // 足りない部分を足していく
        for(int l = i; l < k; l++) {
          a[l] -= min_a;
        }
        ans += min_a;
        i = -1;
      }
     
    }
    if (min_a == max_h) {
        flag = false;
        break;
    }
  }
  
  cout << ans << endl;

}
