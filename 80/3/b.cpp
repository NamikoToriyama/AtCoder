#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <map>

//#include <bits/stdc++.h>
using namespace std;
#define print(x) cout<<(x)<<endl
#define prints(x, y) cout<<(x)<<" "<<(y)<<endl
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

int get_digit_sum(int a){
  int sum = 0;
  rep(i, 5){
    sum += a%10;
    a /= 10;
  }
  return sum;
}

int main() {
  int N, a, b, m, ans = 0;
  cin >> N >> a >> b;
  rep(i, N){
    m = get_digit_sum(i+1);
    if(a <= m && m <= b) {
      ans += (i+1);
    }
  }
  print(ans);
}
