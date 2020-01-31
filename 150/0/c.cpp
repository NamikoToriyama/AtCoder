#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(long i = 0; i < (long)n; i++)
#define ll long long
#define pb push_back
long N;

ll make_num(long n, long i){
  return n * pow(10, N - i - 1);
}

int main() {
  cin >> N;
  ll a = 0, b = 0; // ちゃんと初期化する
  ll  tmp = 0;

  // 入力
  rep(i, N){
    cin >> tmp;
    a += make_num(tmp, i);
  }
  tmp = 0;
  rep(i, N){
    cin >> tmp;
    b += make_num(tmp, i);
  }
  // cout << a << " " << b << endl;

  // Nの順列を生成する
  vector<long> v(N);
  rep(i, N) {
    v[i] = i+1;
  }
  vector<ll> sum;
  tmp = 0;
  // １個目だけは特別な処理をする
  rep(i, N) {
    tmp += make_num(v[i], i);
  }
  // cout << tmp << endl;
  sum.push_back(tmp);
  while( next_permutation(v.begin(), v.end()) ){ // 次の順列を生成
    tmp = 0;
    rep(i, N) {
      tmp += make_num(v[i], i);
    }
    // cout << tmp << endl;
    sum.push_back(tmp);
  };

  // aの番号を求める
  long a_num = 1;
  for(ll x: sum) {
    if(x < a) a_num++;
  }

  // bの番号を求める
  long b_num = 1;
  for(ll x: sum) {
    if(x < b) b_num++;
  }

  // cout << a_num << " " << b_num << endl;
  cout << abs(a_num - b_num) << endl;

  return 0;

}
