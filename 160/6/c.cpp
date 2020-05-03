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
  int N, M, a, b;
  cin >> N >> M;
  vector<ll> h(N);
  vector<bool> flag(N, true);
  vector<vector<int> > m(N);
  rep(i, N){
    cin >> h[i];
  }

  rep(i, M){
    cin >> a >> b;
    a--;
    b--;
    m[a].push_back(b);
    m[b].push_back(a);
  }
  
  bool f;
  int ans = 0;
  rep(i, N){
    f = true;
    if(flag[i]){
      for(int k : m[i]){
        if (h[i] <= h[k]) f = false;
     }
      if(f) {
        ans++;
        // print(i);
      }
    }
  }
  print(ans);

}
