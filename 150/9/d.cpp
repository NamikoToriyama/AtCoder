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
int max_num = pow(10, 5)*2;

int main() {
  int N;
  cin >> N;
  vector<ll> a(N);
  vector<ll> b(max_num, 0);
  vector<ll> c(max_num);

  rep(i, N){
    cin >> a[i];
    b[a[i]-1]++;
  }

  ll tmp = 0;
  ll sum = 0;
  rep(i, N){
    if (b[i] <= 1){
      c[i] = 0;
    } else if (b[i] == 2){
      c[i] = 1;
    } else {
      c[i] = b[i] * (b[i]-1)/2;
    }
    // cout << b[i] << " " << c[i] << endl;
    sum += c[i];
  }

  ll ans = 0;
  ll j;
  rep(i, N){
    j = a[i] - 1;
    ans = - c[j];
    tmp = b[j] - 1;
    if (tmp <= 1){
      ans += 0;
    } else if (tmp == 2){
      ans += 1;
    } else {
      ans += tmp * (tmp-1)/2;
    }
    cout << ans + sum << endl;
  }
  
}
