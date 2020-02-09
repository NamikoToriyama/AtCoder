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

vector<double> p(1000);
void init(){
  rep(i, 1000){
    p[i] = ((i+1)+1)/2.0;
  }
}

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> d(N);
  rep(i, N) {
    cin >> d[i];
  }
  init();

  // 期待値を調べる
  double e = 0.0;
  double tmp = 0.0;
  rep(i, K) {
      tmp += p[d[i]-1];
  }
  e = max(e, tmp);
  // cout << "debug:" << tmp << endl;
  int cnt = 0;
  for(int i = K; i < N;i++){
    // cout << e << endl;
    tmp += p[d[i]-1];
    tmp -= p[d[cnt] - 1];
    cnt++;
    e = max(e, tmp);
  }

  cout << setprecision(7) << e << endl;

}
