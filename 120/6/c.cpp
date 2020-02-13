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
  int N, K;
  cin >> N >> K;
  double ans = 0.0;
  rep(i, N){
    // サイコロの目がi+1の時
    ll l = i+1;
    int j = 0; // 表の回数
    while(l < K){
      j++;
      l *= 2;
    }
    // cout << 1.0/N * pow(1.0/2.0, j) << endl;
    ans += 1.0/N * pow(1./2., j);
  }
  
  cout << setprecision(10) << ans << endl;

}
