#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>

//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

int main() {
  string a, b, c;
  cin >> a >> b >> c;

  if (a[a.size()-1] == b[0]  && b[b.size()-1] == c[0]) cout << "YES" << endl;
  else cout << "NO" << endl;
  
}
