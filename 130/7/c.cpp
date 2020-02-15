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

const int MAX = 510000;
const int MOD = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];

// k が必ず2なのでそこまで大きくはならない。
uint64_t combinations2(uint64_t n, uint64_t k) {
    if (n == 0 || n == 1) return 0;
    uint64_t r = 1;
    for (uint64_t d = 1; d <= k; ++d) {
        r *= n--;
        r /= d;
    }
    return r;
}

int main() {
  // オーダー計算ができないがO(NlogN)なはず
  // 完全にsort関数に頼ってしまった
  int N;
  cin >> N;
  vector<vector<char> > s(N);
  vector<char> a(10);
  string tmp;

  // 各文字のアルファベットの数を数えていく
  rep(i, N){
    cin >> tmp;
    rep(j, 10){
      a[j] = tmp.at(j);
    }
    sort(a.begin(), a.end());
    s[i] = a;
  }
  sort(s.begin(), s.end());

  // 同じ文字列を数える
  vector<int> result(N);
  int cnt = 1;
  rep(i, N - 1){
    if (s[i] == s[i+1]) cnt++;
    else {
      result[i] = cnt;
      cnt = 1;
    }
  }
  result[N-1] = cnt;

  // 答えを計算する
  ll ans = 0;
  rep(i, N){
    ans += combinations2(result[i], 2);
    // cout << combinations2(result[i], 2) << endl;
  }
  
  cout << ans << endl;

}
