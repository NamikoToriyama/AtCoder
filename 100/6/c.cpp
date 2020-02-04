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
ll n = 5*pow(10, 15);

int main() {
  string s;
  ll k;
  char ans = '1';
  cin >> s >> k;
  
  for(char c: s){
      if (c == '1') k--;// 1だと5000兆日たってもダメ
      else { 
        ans = c;
        break; 
      }

      if(k <= 0) break; 
    }
  
  cout << ans << endl;

}
