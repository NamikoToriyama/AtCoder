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
  bool flag = true;
  
  if (s.at(0) != 'A') flag = false;
  // if (s.at(2) != 'C' || s.at(s.size()-3) != 'C') flag = false;
  int cnt = 0;
  rep(i, s.size()){
    if (i == 0) continue;
    if ((2 <= i && i <= s.size()-2) && s.at(i)=='C') cnt++;
    else if (s[i] < 'a' || 'z' < s[i]) flag = false;
  }
  if (cnt != 1) flag = false;
  
  if (flag) cout << "AC" << endl;
  else cout << "WA" << endl;

}
