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
  ll N, ans;
  cin >> N;

  vector<ll> a(N);
  vector<ll> b(N);
  
  rep(i, N){
    cin >> a[i] >> b[i];
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  if(N%2==0){ // 偶数
    ans = b[N/2]+b[(N/2)-1] - (a[N/2] + a[(N/2)-1]) + 1;
  } else { // 奇数
    ans = b[N/2] - a[N/2] + 1;
  }
  print(ans);
}
