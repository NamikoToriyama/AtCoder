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
#define r_rep(i, n) for(int i = (int)n-1; i > 0; i--)
#define ll long long
#define pb push_back

int main() {
  ll x, y, a, b, c;
  cin >> x >> y >> a >> b >> c;

  vector<ll> red(a);
  vector<ll> green(b);
  vector<ll> tp(c);

  rep(i, a){
    cin >> red[i];
  }

  rep(i, b){
    cin >> green[i];
  }

  rep(i, c){
    cin >> tp[i];
  }

  sort(red.begin(), red.end());
  sort(green.begin(), green.end());
  sort(tp.begin(), tp.end());

  // とりあえずの総和をだす
  ll ans = 0;
  vector<ll> tmp;
  for(ll i = a-1; i >= a - x; i--){
    ans += red[i];
    tmp.push_back(red[i]);
  }
  for(ll i = b-1; i >= b - y; i--){
    ans += green[i];
    tmp.push_back(green[i]);
  }
  sort(tmp.begin(), tmp.end());
  // 一番小さいものとtpの一番大きいものを入れ替えていく
  ll i = 0, j = c-1;
  while(tmp[i] < tp[j]){
    ans = ans - tmp[i] + tp[j];
    i++;
    j--;
    if(j == -1 || i == tmp.size()) break;
  }
  cout << ans << endl;

}
