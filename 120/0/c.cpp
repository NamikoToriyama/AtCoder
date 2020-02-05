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
  int cnt0 = 0, cnt1=0;
  for(char c: s){
    if (c=='0') cnt0++;
    if (c=='1') cnt1++;
  }
  
  cout << min(cnt0, cnt1)*2 << endl;

}
