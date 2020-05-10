#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <map>

//#include <bits/stdc++.h>
using namespace std;
#define print(x) cout<<(x)<<endl
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

int main() {
  ll N, K;
  cin >> N >> K;
  vector<ll> a(N+1);
  a[0] = 0;

  rep(i, N){
    cin >> a[i+1];
  }

  // 周回する回数を見る
  ll cnt = 0;
  ll t = a[1];
  vector<bool> x(N+1, true);
  x[1] = false;
  while(1){
    cnt++;
    K--;
    if(K==0){
      print(t); // ここが原因だった
      return 0;
    }
    if(x[t]){
      x[t] = false;
      t = a[t];
    } else {
      break;
    }
    
  }  

  // tをはじめとしてループを探す
  ll s = t;
  vector<ll> b;
  b.push_back(t);
  t = a[t];
  while(s != t){
    b.push_back(t);
    t = a[t];  
  }

  ll b_size = b.size();
  K = K + b_size;
  ll y = K%b_size; // 0からb_size-1までの値が出る
  print(b[y]);

}
