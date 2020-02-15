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
  int N, M;
  cin >> N >> M;
  vector<int> x(M);
  vector<int> y(M-1);

  rep(i, M){
    cin >> x[i];
  }

  // コマの方が多いときは移動する必要がないので0を返す
  if (N >= M) {
    cout << 0 << endl;
    return 0;
  }

  sort(x.begin(), x.end());// 順番に並べる

  // 道の間の距離を求める
  rep(i, M-1){
    y[i] = x[i+1] - x[i];
  }
  sort(y.begin(), y.end());
  
  ll ans = 0;
  // 小さいものだけ足していく
  rep(i, M - N){
    ans += y[i];
  }

  cout << ans << endl;

}
