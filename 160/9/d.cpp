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
vector<ll> hint(100000);

map<ll, ll> prime_factor(ll n){
  map<ll, ll> res;
  for(ll i = 2; i *i <= n; i++){
    while(n % i == 0){
      res[i]++;
      n /= i;
    }
  }
  if (n != 1) res[n] = 1;
  return res;
}

void init(){
  rep(i, 100000){
    hint[i] = (i+1)*(i+2)/2;
  }
}

int main() {
  ll a, ans = 0;
  cin >> a;
  init();
  map<ll, ll> dictionary = prime_factor(a);

  for (const auto& [key, value] : dictionary){
    // cout << key << " => " << value << "\n";
    rep(i, 100000){
      if (value < hint[i]){
        ans += i;
        break;
      }
    }
  }
  print(ans);
}
