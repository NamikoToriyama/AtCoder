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
  int N;
  cin >> N;
  vector<int> a(N+1);
  vector<int> b(N);
  rep(i, N+1){
    cin >> a[i];
  }
  rep(i, N){
    cin >> b[i];
  }

  ll ans = 0; // まさかのintにしていたせいでずっと引っかかってたらしい

  rep(i, N){
    // 近くの敵をまず倒す
    int t = min(a[i], b[i]);
    ans += t;
    b[i] -= t;
    // 残りの力で倒す
    if(i < N){
      t = min(a[i+1], b[i]);
      ans += t;
      a[i+1] -= t;
    }
        
  }
  
  cout << ans << endl;

}
