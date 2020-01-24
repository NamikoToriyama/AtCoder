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

int change_ten(int n){
  if (n%10 == 0) {
    return n;
  } else {
    int i = n/10;
    return (i+1)*10;
  }
}

int main() {
  int A[5];
  int ans = 0;
  rep(i, 5) {
    cin >> A[i];
    ans += change_ten(A[i]);
  }
  // 最後に注文するものの差分をとる
  int diff = 10;
  rep(i, 5) {
    if (A[i]%10!=0)
      diff = min(A[i]%10, diff);
  }
  

  cout << ans - (10 - diff) << endl;

}
