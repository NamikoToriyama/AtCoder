#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>

//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

int main() {
  ll N, num = 0;
  cin >> N;
  int t[6] = {357, 375, 537, 573, 735, 753};
  int d[3] = {3, 5, 7};
  vector<ll> a;

  rep(i, 3){
    a.push_back(d[i]);
  }
  
  // 3, 5, 7を含む数を列挙して行く
  int s = 0, g = a.size(), zero = 1; 
  while(num <= N){
    for(int j = s; j < g; j++){
      for(int n_357: d){
        num = a[j]*10 + n_357;
        a.push_back(num);
        if (num >= N) break;
      }
      if (num >= N) break;
    }
    s = g;
    g = a.size();
    zero++;
  }
  
  int ans=0;
  int flag[3] = {0, 0, 0};
  // このうち，3, 5, 7の3つの数字が入っているものを数える
  for(int i: a){
    if (N < i) break;
    flag[0] = 0; flag[1] = 0; flag[2] = 0;
    string s = to_string(i);
    for(char c: s){
      if(c == '3') flag[0] = 1;
      if(c == '5') flag[1] = 1;
      if(c == '7') flag[2] = 1;
    }
    if (flag[0] &  flag[1] & flag[2]) ans++;
  }
  cout << ans << endl;

}
