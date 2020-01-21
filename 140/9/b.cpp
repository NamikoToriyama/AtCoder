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
#define ll long long
#define pb push_back

int main() {
  ll A, B, K, cnt = 0;
  cin >> A >> B >> K;
  if (A >= K) {
    A = A - K;
  } else {
    B = B - (K - A);
    A = 0;
  }
  if (B < 0) B = 0;
  cout << A <<" "<< B << endl;

}
