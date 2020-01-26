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
  ll H, cnt = 0, a;
  cin >> H;
  a = H;

  while(a != 1) {
    // cout << "a:" << a << endl;
    a /= 2;
    cnt++;
  }
  cnt++;
  // cout << cnt << endl;
  ll ans = 0;
  rep(i, cnt) {
    ans += pow(2, i);
    // cout << pow(2, i) << endl;
  }
  
  cout << ans << endl;

}
