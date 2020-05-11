#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>

//#include <bits/stdc++.h>
using namespace std;
#define print(x) cout<<(x)<<endl
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

int main() {
  int N, M, X, t;
  cin >> N >> M >> X;
  vector<bool> a(N+1, false);

  rep(i, M){
    cin >> t;
    a[t] = true;
  }

  int ans = 1000;
  int cnt = 0;
  rep(i, X){
     if(a[i]) cnt++;
  }
  ans = min(ans, cnt);
  cnt = 0;
  for(int i = X; i <= N; i++){
    if(a[i]) cnt++;
  }
  ans = min(ans, cnt);
  print(ans);

}
