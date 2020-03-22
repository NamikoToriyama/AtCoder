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
ll MOD = 998244353;

int main() {
  int N, S;
  cin >> N >> S;
  vector<ll> a(N);
  vector<vector<ll> > b(N+1, vector<ll>(N));

  int tmp = 0;
  rep(i, N){
    cin >> a[i];
    tmp += a[i];
    b[0][i] = tmp; // 0はなにもひかない
  }

  rep()
  
  cout << setprecision(7) << N << endl;

}
