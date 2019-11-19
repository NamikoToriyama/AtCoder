#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>

//#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

const int MAX = 510000;
const int MOD = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

// 二項係数計算
long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main()
{
  ll X, Y;
  cin >> X >> Y;
  if((X+Y) %3 != 0){
    cout << 0 << endl;
  } else {
    ll i = (2*Y - X)/3;
    ll j =(2*X - Y)/3;
    //cout << i << " " << j << endl;
    // 前処理
    COMinit();
    ll ans = COM(i+j, i);
    cout << ans << endl;
  }
}
