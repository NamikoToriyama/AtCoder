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
  ll r, x, D;
  cin >> r >> D >> x;
  for (int i = 0; i < 10; i++) {
    x = x * r - D;
    cout << x << endl;
  }
  
}
