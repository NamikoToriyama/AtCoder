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
  cin >> s;
  bool flag = true;
  int cnt = 0; char c;
  while(cnt < s.size()){
    c = s[cnt];
    if(c == 'c') {
      cnt++;
      if(cnt >= s.size() && s[cnt] != 'h') flag = false;
    } else if (c == 'o' || c == 'k' || c == 'u') {
      // 何もしない
    } else {
      flag = false;
      break;
    }
    cnt++;
  }
  if(flag) print("YES");
  else print("NO");
}
