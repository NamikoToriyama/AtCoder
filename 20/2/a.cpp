#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <map>

//#include <bits/stdc++.h>
using namespace std;
#define print(x) cout<<(x)<<endl
#define prints(x, y) cout<<(x)<<" "<<(y)<<endl
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

int main() {
  int N, s, t, a, W;
  int ans = 0;
  cin >> N >> s >> t >> W;
  if(s<= W && W <= t) ans++;
  rep(i, N-1){
    cin >> a;
    W += a;
    if(W <= 0) W = 1;
    if(s<= W && W <= t) ans++;
  }
  print(ans);
}
