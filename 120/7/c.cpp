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
  int N, M, b, c;
  cin >> N >> M;
  int n_min = 0, n_max = N;
  
  rep(i, M){
    cin >> b >> c;
    n_min = max(b, n_min);
    n_max = min(c, n_max);
  }
  int ans = n_max - n_min + 1;
  if (ans < 0) ans = 0;
  
  cout << ans << endl;

}
