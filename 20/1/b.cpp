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
#define r_rep(i, n) for(int i = (int)n-1; i >= 0; i--)
#define ll long long int
#define pb push_back
const long long MOD = 1000000007;
const long long INF = 1LL << 60;

int main() {
  int N, a, b, K;
  cin >> N >> a >> b >> K;
  vector<int> t(100, 0);
  t[a-1]++;
  t[b-1]++;

  rep(i, K){
    cin >> a;
    a--;
    t[a]++;
  }

  rep(i, 100){
    if(t[i] > 1) {
      print("NO");
      return 0;
    }
  }
  print("YES");
}
