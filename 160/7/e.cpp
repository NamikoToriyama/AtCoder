#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <map>

//#include <bits/stdc++.h>
using namespace std;
#define print(x) cout<<(x)<<endl
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back
const ll MOD = 998244353; 

// 繰り返し2乗法
ll power(ll a, ll n)
{
        ll ret = 1;
        // kの下の桁から処理。右シフトで処理し終わった桁を追い出す
        // ゼロになるまでやる
        for (; n > 0; n >>= 1, a = a * a % MOD)
        {
                if (n % 2 == 1)
                {
                        ret = ret * a % MOD; // 再帰でも書ける
                }
        }
        return ret;
}

const int MAX = 510000;

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

// 二項係数計算, COM(n,k)でコンビネーションの計算結果が出てくる
// MODで割ってくれてる
long long COM(int n, int k){
    if (n < k) return 1;
    if (n < 0 || k < 0) return 1;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}


int main() {
  ll N, M, K;
  ll ans = 0, cnt = 0;
  cin >> N >> M >> K;
  COMinit();

  rep(i, K+1){
    if(i > 0){
      ans = ans + COM(N-1, i)*M%MOD*power(M-1, N-i-1)%MOD;
      ans %= MOD;
    } else { // あってる
      ans = ans + M*power(M-1, N-i-1)%MOD;
    }
    ans %= MOD;
  }
  print(ans);

}
