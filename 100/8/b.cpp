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
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  int x = x2 - x1;
  int y = y2 - y1;


  int x3, y3, x4, y4;
  x3 = x2 - y;
  y3 = y2 + x;
  x4 = x1 - y;
  y4 = y1 + x;
  
  cout << x3 << " " << y3 << " " << x4 <<" "<< y4<< endl;

}
