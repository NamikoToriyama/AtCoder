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
  int N, K, Q, x;
  cin >> N >> K >> Q;
  vector<int> a(N, 0);

  for (int i = 0; i < Q; i++) {
    cin >> x;
    a[x - 1]++;
  }

  for (int i = 0; i < N; i++) {
    // cout << a[i] + K << endl;
    if (0 < K + a[i] - Q) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }

}
