#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
// めちゃめちゃ解くのに時間がかかった
//#include <tuple>

//#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
ll max_num = 1000000000;



ll getValue(ll A, ll B, ll N) {
  return A * N + B * (long long) (floor(log10(N)) + 1);
}

int main() {
  ll A,B,X;
  cin >> A >> B >> X;
  ll hi = X, lo = 0, N, ans;

  if (X >= getValue(A, B, max_num))  {
    cout << max_num << endl;
  }
  else {
    while (lo <= hi) {
        N = (lo + hi) / 2;
        if (getValue(A, B, N) <= X)
        {
            ans = N;
            lo = N + 1;
        }
        else
        {
            hi = N - 1;
        }
  }

    cout << ans << endl;
  
  }
  
}
