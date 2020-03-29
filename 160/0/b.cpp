#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long
#define pb push_back

int main() {
  long x;
  cin >> x;
  long h = 0;

  // 500円玉について
  int a = x/500;
  x -= a*500;
  h += a * 1000;

  // 5円玉について
  a = x/5;
  h += a * 5;

  
  cout << h << endl;

}
