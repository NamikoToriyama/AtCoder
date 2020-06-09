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
  string s, t;
  cin >> s >> t;
  bool flag = true;

  rep(i, s.size()){
    if (s[i] == '@'){
      char c = t[i];
      if(c == 'a' || c=='t' || c == 'c' || c =='o' || c=='d' || c =='e' || c == 'r' || c == '@'){
        continue;
      } else {
        flag = false;
        break;
      }
    } else if (t[i] == '@') {
      char c = s[i];
      if(c == 'a' || c=='t' || c == 'c' || c =='o' || c=='d' || c =='e' || c == 'r' || c == '@'){
        continue;
      } else {
        flag = false;
        break;
      }
    }
    if (s[i] != t[i]){
      flag = false;
      break;
    }
  }
  if(flag) print("You can win");
  else print("You will lose");

}
