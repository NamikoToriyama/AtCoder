#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long
#define pb push_back

int main() {
  int K, N, a, b = 0, s;
  cin >> K >> N;
  int max_len = 0;
  ll r = 0;

  // 最初の分
  cin >> b;
  s = b;

  rep(i, N-1){
    cin >> a;
    r += a - b;
    max_len = max(max_len, a - b);
    b = a;
  }
  // 最後の分
  max_len = max(max_len, abs(K - b) + s);
  
  cout << K - max_len << endl;

}
