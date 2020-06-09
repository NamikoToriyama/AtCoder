#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <map>

//#include <bits/stdc++.h>
using namespace std;
#define print(x) cout<<(x)<<endl
#define prints(x, y) cout<<(x)<<" "<<(y)<<endl
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define r_rep(i, n) for(int i = n; i >= 0; i--)
#define ll long long int
#define pb push_back
const long long MOD = 1000000007;
const long long INF = 1LL << 60;

int main() {
  int N, Q;
  int L, R, T;
  cin >> N >> Q;
  vector<int> a(N, 0);

  rep(i, Q){
    cin >> L >> R >> T;
    for(int j = L-1; j < R; j++){
      a[j] = T;
    }
  }

  rep(i, N){
    print(a[i]);
  }
}
