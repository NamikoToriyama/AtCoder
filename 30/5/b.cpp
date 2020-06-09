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
#define r_rep(i, n) for(int i = (int)n-1; i >= 0; i--)
#define ll long long int
#define pb push_back
const long long MOD = 1000000007;
const long long INF = 1LL << 60;

int main() {
  string s;
  int t, ans;
  cin >> s >> t;
  int x=0, y=0, cnt = 0;

  rep(i, s.size()){
    if(s[i] == 'L') x--;
    if(s[i] == 'R') x++;
    if(s[i] == 'U') y++;
    if(s[i] == 'D') y--;
    if(s[i] == '?') cnt++;
  }

  x = abs(x);
  y = abs(y);
  if(t == 1){ // 最大値  
    ans = (max(x, y) + cnt) + min(x, y);
    print(ans);
  } else { // 最小値
    ans = x + y;
    if (ans >= cnt) print(ans - cnt);
    else {
      cnt -= ans;
      if(cnt%2==0) print(0);
      else print(1);
    }
  }

}
