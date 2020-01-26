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

bool contain(string T, vector<char> a){
  int cnt = 0, j = 0;
  int t_size = T.size();
  rep(i, a.size()){
    // cout << "debug:" << a[i] << " " << T.at(j)<< endl;
    if (cnt == t_size) return true;
    if (a.at(i) == T.at(j)) {
        cnt++;
        j++;
    } else {
      cnt = 0;
    }
    if(j == t_size) j = 0;
  }
  return false;
}

int main() {
  string S, T;
  cin >> S >> T;
  vector<char> a;
  rep(i, 2)  {
    rep(i, S.size()){ // 順番に2回代入していく。
        a.push_back(S[i]);
    }
  }

  if (contain(T, a)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
    
}
