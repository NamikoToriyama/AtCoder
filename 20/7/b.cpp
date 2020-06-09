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
  int N, sum=0;
  cin >> N;
  vector<int> a(N);

  rep(i, N){
    cin >> a[i];
    sum += a[i];
  }

  if(sum%N != 0){
    print(-1);
    return 0;
  }

  int ave = sum/N;
  int bridge = N; // とりあえずすべてにかけると仮定する
  int cnt = 0;
  sum = 0;
  rep(i, N){
    cnt++;
    sum += a[i];
    if(sum%cnt == 0 && sum/cnt == ave){
      cnt = 0;
      sum = 0;
      bridge--;
    }
  }
  if (bridge == N) bridge--;
  print(bridge);
}
