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
  ll N, t;  
  cin >> N;
  vector<ll> a(N);
  map<ll, ll> m;
  map<ll, ll> m2;

  rep(i, N){
    cin >> a[i];
  }

  rep(i, N){
    t = a[i] - i - 1;
    if(m.find(t) == m.end()){
      m.insert(make_pair(t, 0));
    }
    m[t]++;
  }

  rep(i, N){
    t = a[i] + i + 1;
    if(m2.find(t) == m2.end()){
      m2.insert(make_pair(t, 0));
    }
    m2[t]++;
  }

  ll ans = 0;
  for( auto i = m.begin(); i != m.end() ; ++i ) {
    t = 0 - i->first;
    if (m2.find(t) != m2.end()) {
      ans += i->second * m2[t];
    }
  }
  print(ans);

}
