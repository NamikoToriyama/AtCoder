#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>

//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

int main() {
  int N, X, m, ans = 0;
  cin >> N >> X;
  int min_n = X;

  rep(i, N){
    cin >> m;
    X -= m;
    ans++;
    min_n = min(min_n, m);
  }
  ans += X/min_n;


  
  cout << ans << endl;

}
