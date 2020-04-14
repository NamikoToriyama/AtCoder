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

int main() {
  ll N;
  cin >> N;
  vector<ll> a(N);
  int cnt = 0;
  rep(i, N){
    cin >> a[i];
    if(a[i] < 0){
      cnt++;
      a[i] = -a[i]; // 絶対値をとった値にする
    }
  }
  sort(a.begin(), a.end());
  ll ans = 0;
  rep(i, N){
      ans += a[i];
  }
  if(cnt % 2 != 0){ // 奇数の場合は頑張っても1つはマイナスになるため、絶対値の小さいものを引く
    ans -= a[0]*2;
  } 
  

  
  cout << ans << endl;

}
