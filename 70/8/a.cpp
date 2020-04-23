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
  char x, y;
  cin >> x >> y;

  if(x > y) cout << ">" << endl;
  else if(x < y) cout << "<" << endl;
  else cout << "=" << endl;
  
}
