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
const int v = pow(10, 5);
// 細かいミスが非常に多かった。

int main() {
  int N;
  cin >> N;
  int n = N/2;
  int tmp;
  vector<int> a(v + 1, 0);
  vector<int> b(v + 1, 0);

  rep(i, n){
    cin >> tmp;
    a[tmp-1]++;

    cin >> tmp;
    b[tmp-1]++;
  }

  int a_max = v, b_max = v;
  int a_max2 = v, b_max2 = v;
  rep(i, v) {
    if (a[a_max] < a[i]) {
      a_max2 = a_max;
      a_max = i;
    } else if (a[a_max2] < a[i]){
      a_max2 = i;
    }

    if (b[b_max] < b[i]) {
      b_max2 = b_max;
      b_max = i;
    } else if (b[b_max2] < b[i]){
      b_max2 = i;
    }
  }
  // cout << a_max << " " << b_max << endl;
  // cout << a_max2 << " " << b_max2 << endl;


  int ans = 0;
  if (a_max != b_max) {
    ans = (n - a[a_max]) + (n - b[b_max]);
  } else { // 数が同じ場合
      int n1 = (n - a[a_max2]) + (n - b[b_max]);
      int n2 = (n - b[b_max2]) + (n - a[a_max]);
      ans = min(n1, n2);
  }
  
  cout << ans << endl;

}
