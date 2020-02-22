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

const ll MAX = 2*100000;
const ll MOD = 1000000007;

ll power(ll a, ll n, ll m)
{
        ll ret = 1;
        for (; n > 0; n >>= 1, a = a * a % m)
        {
                if (n % 2 == 1)
                {
                        ret = ret * a % m;
                }
        }
        return ret;
}

ll COM(ll N, ll K) {
    ll X=1, Y=1;
    for (int i = 1; i <= K; i++){
        X = X*(N-i+1)%MOD; // *=にするとmodされた後に掛け算なのでダメ
        Y = Y*i%MOD;
    }
    ll Y_p = power(Y,MOD-2,MOD);
    // あまりのせいでYが大きくなるとX/Yがうまく計算されないため逆元を用いる
    // cout << X << " " << power(Y,MOD-2,MOD) << " " << Y_p << endl;
    return X*Y_p%MOD;
}

int main() {
  int N, a, b;
  cin >> N >> a >> b;

  ll ans = power(2, N, MOD) - 1;
  ll a_c = COM(N, a);
  ll b_c = COM(N, b);
  ans -= a_c%MOD;
  ans -= b_c%MOD;
  cout<<(ans%MOD+MOD)%MOD<<endl;

}
