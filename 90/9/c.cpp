#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>

//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back
const long long INF = 1LL << 60;


int main() {
  ll N, k = 1, money=0;
  cin >> N;
  vector<ll> m;
  m.push_back(1);
  while(money <= 100000){
    money = pow(6, k);
    m.push_back(money);
    k++;
  }
  k = 1;
  money=0;
  while(money <= 100000){
    money = pow(9, k);
    m.push_back(money);
    k++;
  }
  sort(m.begin(), m.end());


  vector<ll> dp(100001, INF);
  dp[0] = 0;
  for(int i = 0; i < N; i++){
    for(int j = 0; j < m.size(); j++){ // とりあえずKまで代入しちゃう
      int h = i + m[j]; // 今の所持金
      if (h > 100000) continue;
      dp[h] = min(dp[h], dp[i] + 1);
    }
  }

  
  cout << dp[N] << endl;

}
