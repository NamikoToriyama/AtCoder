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
  int a, b, c;
  cin >> a >> b >> c;

  if (a-b >= c) cout << 0 << endl;
  else cout << c - (a - b) << endl;
  
}
