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
#define ll long long int
#define pb push_back

// 桁数を求めるプログラム
unsigned GetDigit(ll num)
{
  return log10(num) + 1;
}

void calc_one(ll N){
  int digit = GetDigit(N);
  ll ans = 9 * (digit - 1);
  // 最後の桁については細かく調べる
  ll num = pow(10, (digit - 1));
  ll i = num;
  while(i <= N){
    // cout << i << endl;
    ans++;
    i += num;
  }
  cout << ans << endl; 
}

void calc_two(ll N){
  int digit = GetDigit(N);
  if (N <= 10) {
    cout << 0 << endl;
    return;
  }
  int i = 2;
  ll ans = 0;
  while(i <= digit-1){ // 近い桁までたす
    ans += pow(9, i);
    i++;
  }
  // cout << ans << endl;
  // それ以降は細かく調べる
  if (digit-2 > 0) {
    int dig = N/pow(10, (digit-1)); // 一番上の桁を求める
    cout << dig << endl;
    ans += pow(9, (digit-1))*dig;
  }
  // cout << ans << endl;
  ll tmp = 1, c = N;
  rep(i, digit-1){
    tmp *= c%10;
    c /= 10;
  }
  ans += tmp;
  cout << ans << endl;
}

void calc_three(ll N){
    // 100以下の場合はそもそも0こ
    if (N<=100) cout << 0 << endl;
    else {
      int digit = GetDigit(N);
      ll ans = 0;
      int i = 3;
      while(i <= digit-1){ // 近い桁までたす
        ans += pow(9, i+1);
        i++;
      }
      if (digit-2 > 0) {
      int dig = N/pow(10, (digit-1)); // 一番上の桁を求める
        cout << dig << endl;
        ans += pow(9, (digit-1)+1)*dig;
      }
      // cout << ans << endl;
      ll tmp = 1, c = N;
      rep(i, digit-1){
        tmp *= c%10;
        c /= 10;
      }
      ans += tmp;
      cout << ans << endl;
    }

  
}

int main() {
  ll N; int K;
  cin >> N >> K;
  
  // 1の時
  if (K==1){
    calc_one(N);
  } else if(K==2){
    calc_two(N);
  } else {
    calc_three(N);
  }
  

}
