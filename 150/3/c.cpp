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
  ll N, k;
  cin >> N >> k;
  vector<ll> a(N);
  rep(i, N){
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  // rep(i, N){
  //   cout << a[i] << endl;
  // }
  ll h = 0;
  if (N - k >0){
    rep(i, N - k){
      h += a[i];
    }
  }
  cout << h << endl;

}
