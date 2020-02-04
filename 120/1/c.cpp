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
  ll N, M;
  cin >> N >> M;
  vector<pair<ll, ll> > a(N);

  rep(i, N){
    cin >> a[i].first >> a[i].second;
  }
  sort(a.begin(), a.end());

  ll ans = 0; // 金額
  ll cnt = 0; // 本数
  rep(i, N) {
    if(cnt+a[i].second <= M) {
      ans += a[i].first * a[i].second;
      cnt += a[i].second;
    } else {
      ans += a[i].first * (M - cnt);
      cnt = M;
    }

    if(cnt==M) break;
  }
  
  cout << ans << endl;

}
