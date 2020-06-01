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
#define r_rep(i, n) for(int i = n; i >= 0; i--)
#define ll long long int
#define pb push_back

const long long INF = 1LL << 60;

int main() {
  int N, ans = 100000;
  cin >> N;
  rep(i, 5000){
    rep(j, 500){
      int S = i*j;
      if (S == 0) continue;
      if(S <= N){
        ans = min(ans, abs(i-j)+N-S);
      }
    }
  }
  print(ans);

}
