#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
//#include <tuple>

//#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
  int N, b;
  bool flag = false;
  cin >> N;

  for (int i = 9 ; i > 0; i--) {
    if (N % i == 0) {
      b = N / i;
      if (b <= 9) {
        flag = true;
      }
    }
  }

  if (flag) cout << "Yes" << endl;
  else cout << "No" << endl;
}
