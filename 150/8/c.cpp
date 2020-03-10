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
  double A, B;
  cin >>  A >> B;
  int e = (A+0.9)/0.08;
  int b = B/0.1;
  int tmp1, tmp2, ans;
  bool flag = false;

  for(int i = b; i <= e; i++){
    tmp1 = i * 0.08;
    tmp2 = i * 0.10;
    if (tmp1==A && tmp2 == B){
      flag = true;
      ans = i;
      break;
    }
  }
  if (flag){
    cout << ans << endl;
  } else {
    cout << -1 << endl;
  }

}
