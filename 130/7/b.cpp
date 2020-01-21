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
  int k, x;
  cin >> k >> x;
  int min_n = -1000000 - 1;

  int max_b = min(x + k, 1000000 + 1);
  int min_b = max(x - k, min_n);
  // cout << min_b << max_b;

  for (int i = min_b + 1; i < max_b - 1; i++){
    cout << i << " ";
  }
  cout << max_b - 1 << endl;

}
