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
  ll a, b, c, k, ans = 0;
  cin >> a >> b >> c >> k;

  if(k <= a){
    ans += k;
    print(ans);
    return 0;
  } else {
    ans += a;
    k -= a;
  }

  if(k <= b){
    print(ans);
    return 0;
  } else {
    k-=b;
  }

  ans -= k;
  print(ans);

}
