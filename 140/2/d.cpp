#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < n; i++)
#define ll unsigned long long int
#define pb push_back

ll gcd(ll c, ll d){ // 最大公約数を求めるプログラム
    ll mx = max(c,d);
    ll mi = min(c,d);
    ll tmp=0;
    while(mi > 0){
        tmp = mx % mi;
        if(tmp==0){
            return mi;
        } else{
            mx = mi;
            mi = tmp;
        }
    }
    return 1;
} 

ll lcm(ll c, ll d){ // 最小公倍数を求めるプログラム
    ll mx = max(c,d);
    ll mi = min(c,d);
    ll tmp=0;
    while(mi > 0){
        tmp = mx % mi;
        if(tmp==0){
            return (c*d)/mi;
        } else{
            mx = mi;
            mi = tmp;
        }
    }
    return c*d;
} 

int main() {
  ll A, B;
  cin >> A >> B;
  ll N = gcd(A, B);
  vector<ll> c;

  // AとBの公約数を配列にして入れていく
  // TLEはこれで改善した
  for (int i = 1; i < int(pow(N, 0.5)) + 1; i++){
    if (A % i == 0 && B % i == 0){
      c.push_back(i);
      if (i != N / i){
        c.push_back(N/i);
      }      
    }
  }
  sort(c.begin(), c.end()); // 小さいものから見ていった方が増えるような気がする
  
  // 全探索する
  ll max_num = 1, cnt;
  ll tmp;
  rep(i, c.size()){ // この値が解に入っていると固定する
    tmp = c[i];
    cnt = 1; // 固定の分の値
    rep(j, c.size()){
      if (i==j) continue;
      if (gcd(tmp, c[j]) == 1){ // 互いに素の時
        cnt++;
        // if (lcm(tmp, c[j]) > tmp)
        tmp = lcm(tmp, c[j]); // 最小公倍数を出していく
        
      }
      // cout << cnt<< " "<< tmp << " " << i << " " << j << endl;
    }
    max_num = max(max_num, cnt);
  }
  
  cout << max_num << endl;

}
