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
#define r_rep(i, n) for(int i = n; i >= 0; i--)
#define ll long long int
#define pb push_back

const long long INF = 1LL << 60;

int main() {
  int N, M;
  cin >> N;
  vector<int> a(N);
  int sum = 0;
  rep(i, N){
    cin >> a[i];
    sum += a[i];
  }

  cin >> M;
  int t, x;
  rep(i, M){
    cin >> t >> x;
    print(sum-a[t-1] + x);
  }
}
