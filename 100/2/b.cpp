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
  int a[N];

  rep(i, N) {
    cin >> a[i];
  }
  
  int ans = 0;
  rep(i, N){
    for(int j = i + 1; j < N; j++) {
      ans = max(ans, abs(a[i] - a[j]));
    }
  }
  cout << ans << endl;

}
