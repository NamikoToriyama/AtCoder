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

int main() {
  string s, t;
  cin >> s >> t;
  bool flag = true;
  vector<char> a;
  // アルファベット26通り試して、1意になるかどうか調べる
  rep(i, 26){
    a.clear();
    char c = 'a' + i;
    // s側から確認
    rep(i, s.size()){
      if (s[i] == c){
        a.push_back(t[i]);
      }
    }
    // 違う文字があるかどうかチェックする
    if (a.size() > 1) {
      rep(i, a.size()-1){
        if (a[i] != a[i+1]) {
          flag = false;
          break;
        }
      }
    }
    a.clear();
    // t側から確認
    rep(i, t.size()){
      if (t[i] == c){
        a.push_back(s[i]);
      }
    }
    // 違う文字があるかどうかチェックする
    if (a.size() > 1) {
      rep(i, a.size()-1){
        if (a[i] != a[i+1]) {
          flag = false;
          break;
        }
      }
    }
    if(!flag) break;
  }

  if (flag){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

}
