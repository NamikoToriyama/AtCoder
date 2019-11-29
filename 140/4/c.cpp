#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
//#include <tuple>

//#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
  ll N;
  cin >> N;
  ll min_n = N;

  /* <= がなかったのでWAでた */
  for (ll i = 1; i <= sqrt(N); i++) {
    if (N % i == 0) {
      ll j = N/i;
      min_n = min(min_n, i + j - 2);
    }
  }
  cout << min_n << endl;

}
