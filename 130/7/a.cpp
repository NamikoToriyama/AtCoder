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
  int a,b;
  cin >> a >> b;

  int max_n = max(a+b, a-b);
  
  cout << max(max_n, a*b) << endl;

}
