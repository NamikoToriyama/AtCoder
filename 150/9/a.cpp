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
  int N, M;
  cin >> N >> M;
  // 全パターン
  int a = (N+M)*(N+M-1)/2;
  // 奇数のパターン数
  int b = N*M;
  int ans = a- b;
  cout << ans << endl;

}
