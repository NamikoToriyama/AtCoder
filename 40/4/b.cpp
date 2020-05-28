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
  string s;
  cin >> s;
  vector<char> c(26, 0);
  for(char i: s){
    c[i-'a']++;
  }

  rep(i, 26){
    if(c[i] % 2 != 0){
      print("No");
      return 0;
    }
  }
  print("Yes");
}
