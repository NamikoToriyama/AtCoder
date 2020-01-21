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
  string s;
  int n, k;
  cin >> k >> n >> s;
  // cout << (char)('a' + s.at(n) - 'A') << endl;
  s.at(n - 1) = (char)('a' + s.at(n - 1) - 'A');
  
  cout << s << endl;

}
