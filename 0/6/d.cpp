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
#define prints(x, y) cout<<(x)<<" "<<(y)<<endl
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

int n;
int a[30000];
int dp[30000];

void solve(){
  int res = 0;
  for(int i=0; i < n; i++){
    dp[i] = 1;
    for(int j = 0; j < i; j++){
      if(a[j] < a[i]){
        dp[i] = max(dp[i], dp[j]+1);
      }
    }
    res = max(res, dp[i]);
  }

  print(n-res);
}

int main() {
  cin >> n;
  rep(i, n){
    cin >> a[i];
  }
  solve();
}
