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
  int N, K;
  cin >> N >> K;

  vector<int> a(N);

  rep(i, N){
    cin >> a[i];
  }
  
  int plus = 0, minus = 0; zero = 0;
  rep(i, N) {
    if (a[i] == 0) zero++;
    else if (a[i] > 0) plus++;
    else minus++;
  }
  
  cout << setprecision(7) << N << endl;

}
