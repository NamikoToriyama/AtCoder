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
#define ll long long 
#define pb push_back

int main() {
  ll a;
  string b;
  cin >> a >> b;
  long double ans = 0;
  ll c = (ll)(b[0]-'0')*100 + (ll)(b[2]-'0')*10 + (ll)(b[3]-'0');
  print(a*c/100);
  
}
