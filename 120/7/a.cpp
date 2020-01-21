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
  int A, B;
  cin >> A >> B;

  if (A <= 5) {
    cout << 0 << endl;
  } else if (A <= 12) {
    cout << B/2 << endl;
  } else {
    cout << B << endl;
  }
  
}
