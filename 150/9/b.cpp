#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long
#define pb push_back

bool check(string s){
  int N = s.size();
  for(int i = 0; i < N/2; i++){
    // cout << s[i] << " " << s[N-1-i] << endl;
    if (s[i] != s[N-1-i]){
      return false;
    }
  }
  return true;
}

int main() {
  string s;
  cin >> s;
  int N = s.size();

  // sが回文であること
  bool flag = check(s);

  // 2番目の条件
  string str = "";
  int m = (N-1)/2;
  for(int i = 0; i < m; i++){
    str += s[i];
  }
  // cout << str << endl;
  bool flag2 = check(str);

  // 3番目の条件
  str = "";
  m = (N+3)/2-1;
  for(int i = m; i < N; i++){
    str += s[i];
  }
  bool flag3 = check(str);
  // cout << "3:" << str << endl;
  
  if (flag && flag2 && flag3) cout << "Yes" << endl;
  else cout << "No" << endl;

}
