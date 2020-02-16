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
  int N;
  cin >> N;
  vector<string> s(N);

  rep(i, N){
    cin >> s[i];
  }

  sort(s.begin(), s.end());
  vector<pair<int, string> > a;// かずと、番号
  int cnt = 1;
  int max_cnt = 0;
  rep(i, N-1){
    if(s[i] == s[i+1]) {
      cnt++;
    } else {
      a.push_back(make_pair(cnt, s[i]));
      max_cnt = max(max_cnt, cnt);
      cnt = 1;
    }
  }
  max_cnt = max(max_cnt, cnt);
  a.push_back(make_pair(cnt, s[N-1]));

  rep(i, a.size()){
    // cout << a[i].first << " " << a[i].second << endl;
    if (max_cnt == a[i].first){
      cout << a[i].second << endl;
    }
  }
  
}
