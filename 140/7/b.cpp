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
  cin >> s;
  int cnt = 0;
  int n = s.size();
  for (int i = 0; i < n/2; i++) {
    if (s.at(i) != s.at(n-i - 1)) cnt++;
  }
  
  cout << cnt << endl;

}
