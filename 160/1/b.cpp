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

int main() {
  ll N, M;
  ll sum = 0;
  cin >> N >> M;
  vector<ll> a(N);

  rep(i, N){
    cin >> a[i];
    sum += a[i];
  } 
  // ここまで入力


  int cnt = 0;
  int b;
  if (sum%(4*M) == 0) b = sum/(4*M);
  else b = sum/(4*M) + 1;

  // cout << b << " " << sum << endl;
  sort(a.begin(), a.end());
  rep(i, N){
    if(a[i] >= b) cnt++;
  }
  
  if (cnt >= M) cout << "Yes" << endl;
  else cout << "No" << endl;
  
}
