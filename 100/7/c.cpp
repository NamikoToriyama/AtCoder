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
#define ll long long int
#define pb push_back


int main() {
  ll N, K, sum = 0;
  cin >> N >> K; 
  vector<ll> a(N);
  vector<ll> b; 

  rep(i, N){
    cin >> a[i];
  }

  // 累積和作成
  b.push_back(0);
  rep(i, N - 1){
    sum += abs(a[i]-a[i+1]);
    b.push_back(sum); 
  }

  // 解説見たけど、場合分けしなくても確かにいいですね
  ll min_length = pow(10, 13), tmp;
  for(int i = 0; i < N-K+1; i++) {
    tmp = b[K+i-1] - b[i] + min(abs(a[K+i-1]), abs(a[i]));
    // cout << tmp << endl;
    min_length = min(tmp, min_length);
  }
  
  cout << min_length << endl;

}
