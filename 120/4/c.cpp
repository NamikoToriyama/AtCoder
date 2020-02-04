#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

//#include <tuple>

//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long
#define pb push_back

int main() {
  string s;
  cin >> s;

  int a = 0, b = 0;

  bool flag = false; // 偶数だとfalse, 奇数だとtrueになる。
  // 101010...にした時の判定
  for(char c: s){
    if(flag) {
      if(c != '0') a++;
      flag = false;
    } else {
      if (c != '1') a++;
      flag = true;
    }
  }

  // 010101...にした時の判定
  flag = false;
  for(char c: s){
    if(flag) {
      if(c != '1') b++;
      flag = false;
    } else {
      if (c != '0') b++;
      flag = true;
    }
  }
  // cout << a << " " << b << endl;
  
  cout << min(a,b) << endl;

}
