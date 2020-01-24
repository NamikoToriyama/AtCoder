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
  int N, D;
  cin >> N >> D;
  if (N%((2*D)+1)) {
    cout << N/(2*D+1)+1 << endl;

  } else {
    cout << N/(2*D+1) << endl;
  }

}
