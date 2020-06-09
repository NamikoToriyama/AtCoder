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

void RunLengthEncoding(string s){
  char c = s[0];
  int cnt = 0;
  for(char i: s){
    if(c==i){
      cnt++;
    } else {
      cout << c << cnt;
      c = i;
      cnt = 1;
    }
  }
  cout << c << cnt;
  cout << endl;
}

int main() {
  string s;
  cin >> s;
  RunLengthEncoding(s);
}
