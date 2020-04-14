#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>

// データ構造の問題ゲーだった。
//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back


int main() { 
  ll N, M;
  cin >> N >> M;
  vector<ll> a(N);

  rep(i, N){
    cin >> a[i];
  }

  ll ans = 0;
  priority_queue<ll> q;

  for (int i = 0; i < N; ++i) {
      q.push(a[i]);
  }
  while (M > 0) {
      ll b = q.top()/2;
      q.pop();
      q.push(b);
      M--;
  }
  rep(i, N){
    ans += q.top();
    q.pop();
  }

  cout << ans << endl;

}
