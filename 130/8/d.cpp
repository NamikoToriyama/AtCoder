#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>

// #include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

const int MAX = 200000 + 1;
vector<vector <ll> > tree(MAX);
vector<ll> value(MAX, 0);
vector<bool> flag(MAX, true);

void dfs(ll j){
  flag[j] = false;
  if (tree[j].size() == 0) return;
  for(ll k: tree[j]){
    if (flag[k]){
      value[k] += value[j];
      dfs(k);
    }
  }
  return;
}

int main() {
  int N, Q;
  cin >> N >> Q;
  
  ll a, b;
  rep(i, N - 1){
    cin >> a >> b;
    a--; b--;
    if (a == 0) {
      tree[a].push_back(b);
    } else if (b == 0){
      tree[b].push_back(a);
    } else {
      tree[a].push_back(b);
      tree[b].push_back(a);
    }
  }

  ll p, x;
  rep(i, Q){
    cin >> p >> x;
    value[p - 1] += x;
  }

  // 最後にたすのはDFSで行う必要があるらしい
  // 根の向きが逆の可能性もある
  dfs(0);

  // 出力
  rep(i, N){
    cout << value[i] << endl;
  }

}
