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
  vector<int> x(N);
  rep(i, N){
    cin >> x[i];
  }
  sort(x.begin(), x.end());
  
  ll ans;
  ll tmp = 0;

  rep(i, N){
    tmp += pow(abs(x[i]-1), 2);
  }
  ans = tmp;
  // cout << ans << endl;

  for(int p = 2; p <= 100; p++){
    tmp = 0;
    rep(i, N){
      tmp += pow(abs(x[i]-p), 2);
    // cout << pow(x[i] - p, 2) << endl;
    }
    ans = min(ans, tmp);
  }
  
  cout << ans << endl;

}
