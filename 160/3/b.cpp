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
  int N, M, a;
  cin >> N >> M;
  ll sum = 0;
  rep(i, M){
    cin >> a;
    sum += a;
  }
  
  int ans = N-sum;
  if (ans < 0) ans = -1;
  cout << ans << endl;

}
