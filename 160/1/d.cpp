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

int get_fist_digit(ll a){
  string s = to_string(a);
  char c = s.at(s.size()-1);
  return (int)c - '0';
}

void bfs(int K){
  // 配列を作る
  int N = pow(10, 5);
  vector<ll> ans;
  rep(i, 9){
    ans.push_back(i+1);
  }

  int cnt = 0;
  while(cnt < N) {
    ll num = ans[cnt];
    int digit = get_fist_digit(num);//一桁目をゲットする
    // cout << num << " " << digit << endl;
    if (digit-1 != -1){
      ans.push_back(num*10+digit-1);
    }
    ans.push_back(num*10+digit);
    if(digit+1 != 10){
      ans.push_back(num*10+digit+1);
    }
    
    if (ans.size()>= K) break;
    cnt++;
  }
  // rep(i, 100){
  //   cout << ans[i] << " ";
  // }
  cout << ans[K-1] << endl;
  
}

int main() {
  ll K;
  cin >> K;
  
  bfs(K);
}
