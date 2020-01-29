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
  vector<int> h(N);
  
  rep(i, N) {
    cin >> h[i];
  }
  int ans = 0, tmp=0;
  for(int i = N-1; i > 0; i--) {
    if (h[i-1] >= h[i]){
      tmp++;
    } else {
      ans = max(ans, tmp);
      tmp = 0;
    }
  }
  ans = max(ans, tmp);
  
  cout << ans << endl;

}
