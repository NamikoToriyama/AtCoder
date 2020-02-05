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
  int N, K;
  cin >> N >> K;
  vector<int> h(N);

  rep(i, N){
    cin >> h[i];
  }

  sort(h.begin(), h.end());
  int ans = h[N-1]-h[0]; // 初期値に注意
  for(int i = K-1; i < N; i++){
    ans = min(ans, abs(h[i]-h[i-K+1]));
  }
  
  cout << ans << endl;

}
