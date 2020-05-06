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
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

bool check_number(char c){
  if('0' <= c && c <= '9') return true;
  return false;
}

int main() {
  int a, b;
  string s;
  cin >> a >> b >> s;

  bool flag = true;
  if(s.size() != a+b+1) flag = false;
  else {
    rep(i, a){
    if(!check_number(s[i])) flag = false;
    }
    if(s[a] != '-') flag = false;
    for(int i = s.size()-1; i >= s.size() - b; i--){
      if(!check_number(s[i])) flag = false;
    }
  }
  
  if(flag) print("Yes");
  else print("No");
}
