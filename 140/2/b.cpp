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
  int N, t, h, cnt = 0;
  cin >> N >> t;

  for (int i = 0; i < N; i++) {
    cin >> h;
    if (t <= h) cnt++;
  }
  
  cout << cnt << endl;

}
