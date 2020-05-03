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

int N, M, Q, a, b, c, d;
vector<vector<ll> > total;
vector<ll> koho(10);

void dfs(int j, int n){ // jは深さ、 nは数字
  if(j == N+1) {
    return;
  }
  koho[j - 1] = n;
  for(int i = n; i <= M; i++){
    dfs(j + 1, i);
  }
  if(j == N) {
    total.push_back(koho);
    return;
  } 
}

int main() {
  cin >> N >> M >> Q;
  vector<vector<ll> > kumi(Q, vector<ll>(4, 0));

  rep(i, Q){
    cin >> kumi[i][0] >> kumi[i][1] >> kumi[i][2] >> kumi[i][3];
  }

  // 集合を作成する
  rep(i, M + 1){
    dfs(1, i+1);
  }
  

  ll ans = 0, tmp;
  // 探索する
  rep(i, total.size()){
    tmp = 0;
    koho = total[i];
    rep(j, Q){
      a = kumi[j][0] - 1;
      b = kumi[j][1] - 1;
      c = kumi[j][2];
      d = kumi[j][3];
      if(koho[b]-koho[a] == c) tmp += d;
      // rep(k, N){
      //   cout << koho[k] << " ";
      // }
      // cout << endl;
    }
    
    ans = max(ans, tmp);
  }
  
  
  print(ans);

}
