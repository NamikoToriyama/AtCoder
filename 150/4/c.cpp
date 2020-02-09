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
  int N, b;
  cin >> N;
  ll c = pow(10, 8);
  vector<int> a(N);

  rep(i, N){
    cin >> a[i];
  }
  sort(a.begin(), a.end());

  bool flag = true;

  rep(i, N-1){
    if(a[i]== a[i+1]) flag = false;
  }

  if(flag) cout << "YES" << endl;
  else cout << "NO" << endl;
}
