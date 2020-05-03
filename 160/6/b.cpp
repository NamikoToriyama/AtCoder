#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <map>

//#include <bits/stdc++.h>
using namespace std;
#define print(x) cout<<(x)<<endl
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

int main() {
  int N, K, d, o;
  cin >> N >> K;
  vector<int> a(N, 0);

  rep(i, K){
    cin >> d;
    rep(i, d){
      cin >> o;
      a[o-1]++;
    }
  }

  int ans = 0;
  rep(i, N){ 
    // print(a[i]);
    if(a[i] == 0) ans++;
  }
  print(ans);

}
