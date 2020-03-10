#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long
#define pb push_back

int main() {
  ll N, A, B, ans = 0;
  cin >> N >> A >> B;

  ll C = N/(A+B);
  ll D = N - (A+B)*C;
  ans = A * C + min(D, A);  
  cout << ans << endl;

}
