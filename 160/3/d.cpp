#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>

//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

const int MAX = 510000;
const int MOD = 1000000007;

int main() {
  int N, K;
  ll t = 0, sum = 0;
  cin >> N >> K;
  vector<ll> a(N+1); // 階差数列
  rep(i, N+1){
    t += i;
    a[i] = t;
  }


  for(int i = K-1; i < N; i++){
    cout << a[N-i-1] << " ; " << a[i] << endl;
    t = (a[N] - a[N-i-1]) - (a[i] - a[0]) + 1;
    sum += t % MOD;
    cout << t << endl;

  }
  // 最後の文
  // メモリアクセスエラーが出ていた
  t = (a[N] - a[0]) - (a[i] - a[0]) + 1;  
  sum += t % MOD;
  cout << sum%MOD << endl;
  

}
