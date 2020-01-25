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
  string s;
  cin >> s;
  int cnt = 0, max_cnt=0;

  for (char N: s) {
    if (N == 'A') {
      cnt++;
    } else if (N == 'T'){
      cnt++;
    } else if (N == 'C'){
      cnt++;
    } else if (N == 'G'){
      cnt++;
    } else {
      max_cnt = max(cnt, max_cnt);
      cnt = 0;
    }
  }
  // これを忘れていたためWAに。
  max_cnt = max(cnt, max_cnt);

  cout << max_cnt << endl;
}
