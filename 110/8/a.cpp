#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <tuple>

//#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
  int A,B;
  cin >> A >> B;
  if(B%A == 0) cout << A+B << endl;
  else cout << B-A << endl;
}
