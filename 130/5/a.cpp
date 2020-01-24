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
  ll A, B;
  cin >> A >> B;
  if ((A+B)%2 == 0) {
      cout << (A+B)/2 << endl;
  } else {
      cout << "IMPOSSIBLE" << endl;
  }
}
