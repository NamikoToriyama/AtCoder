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
  ll N;
  cin >> N;
  vector<ll> h(N);

  ll m = 0;
  // なんかよくわからないけど減らすだと2つWA出て増やすだとACできた
  rep(i, N){
    cin >> h[i];
    if (m > h[i]) { // 左のますが大きかった時
      h[i]++; // 左を減らす
    }
    m = h[i];
  }
  // rep(i, N){
  //   cout << h[i] << endl;
  // }

  bool flag = true;
  rep(i, N-1){
    if (h[i] > h[i+1]){
      flag = false;
      break;
    }
  }

  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;  
  
}
