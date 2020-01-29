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
  int ans = N, i;
  bool flag = true;
  while(flag) {
    for(i = 2; i < ans; i++){
      if (ans%i == 0) {
        break;
      }
    }
    if (i == ans) flag = false;
    else ans++;
  }
    
  cout << ans << endl;

}
