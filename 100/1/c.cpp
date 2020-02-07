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
  int N, K, ans;
  cin >> N >> K;
  vector<int> a(N);
  // 結局使わなくて笑ったw
  rep(i, N){
    cin >> a[i];
  }
  if ((N-1)%(K-1) == 0) ans = (N-1)/(K-1);
  else ans = (N-1)/(K-1) + 1;
  
  cout << ans << endl;

}
