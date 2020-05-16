#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <map>

//#include <bits/stdc++.h>
using namespace std;
#define print(x) cout<<(x)<<endl
#define prints(x, y) cout<<(x)<<" "<<(y)<<endl
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

int main() {
  double a, b, c, d;
  cin >> a >> b >> c >> d;
  if(b/a == d/c) print("DRAW");
  else if(b/a > d/c) print("TAKAHASHI");
  else print("AOKI");
}
