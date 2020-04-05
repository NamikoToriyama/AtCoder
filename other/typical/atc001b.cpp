#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

/* 素集合データ構造 */
//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long
#define pb push_back


/* Union-Find木の実装 */

vector<int> par;
vector<int> ranks;

/* ランクありのUnion-Find木の実装 */
// n要素で初期化
void init(int n){
  rep(i, n) {
    par.push_back(i); // 初めは全部の頂点が根
    ranks.push_back(0);
  }
}

// 木の根を求める
int root(int x){
  if(par[x] == x){
    return x;
  } else {
    return par[x] = root(par[x]); // 経路圧縮
  }
}

// xとyの属する集合を併合
void unite(int x, int y) {
    int rx = root(x);
    int ry = root(y);
    if (rx == ry) return;
    if (ranks[rx] < ranks[ry]) swap(rx, ry);
    par[ry] = rx;
    if (ranks[rx] == ranks[ry]) ranks[rx]++;
}

// xとyが同じ集合に属するか否か
bool same(int x, int y){
  return root(x) == root(y);
}

int main() {
  int N, Q;
  cin >> N >> Q;
  int a, b, c;
  init(N);
  rep(i, Q){
    cin >> a >> b >> c;
    if(a==0){ // a=0の時連結
      unite(b, c);
    } 
    if (a==1){ // a=1の時判定
      if(same(b, c)) cout <<  "Yes" << endl;
      else cout << "No" << endl;
    }
  }
  
}
