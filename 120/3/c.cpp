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
  ll a[5];
  cin >> N;
  ll min_n = pow(10, 15);
  rep(i, 5){
    cin >> a[i];
    min_n = min(min_n, a[i]);
  }
  ll ans = 0;
  if (N%min_n == 0) ans += 4 + N/min_n;
  else {
    ans += 5 + N/min_n;
  }
  
  cout << ans << endl;

}
