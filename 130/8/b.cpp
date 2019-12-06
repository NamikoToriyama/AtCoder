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
  int N, a;
  double p = 0;
  double result;
  cin >> N;

  // これで通るのかウケる
  for (int i = 0; i < N; i++) {
    cin >> a;
    p += 1./a;
  }

  result = 1/p;
  
  cout << setprecision(10) << result << endl;

}
