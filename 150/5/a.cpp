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
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long
#define pb push_back

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int cnt = 0;
  if (a == b) cnt++;
  if (a == c) cnt++;
  if (b == c) cnt++;

  // cout << cnt << endl;

  if (cnt == 1) cout << "Yes" << endl;
  else cout << "No" << endl;

}
