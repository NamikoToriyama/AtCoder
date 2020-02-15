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
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define ll long long
#define pb push_back

long euclid(long c, long d)
{ // 最大公約数を求めるプログラム
  long mx = max(c, d);
  long mi = min(c, d);
  long tmp = 0;
  while (mi > 0)
  {
    tmp = mx % mi;
    if (tmp == 0)
    {
      return mi;
    }
    else
    {
      mx = mi;
      mi = tmp;
    }
  }
  return 1;
}

int main()
{
  ll N, x;
  cin >> N >> x;
  vector<ll> a(N);

  rep(i, N)
  {
    cin >> a[i];
  }

  ll ans = a[1] - a[0];
  sort(a.begin(), a.end());

  if (N == 1)
  {
    ans = abs(x - a[0]);
  }
  else
  {
    vector<ll> b;
    rep(i, N)
    {
      b.push_back(abs(x - a[i]));
    }

    // それぞれの最大公約数を求めていく
    ll tmp = euclid(b[0], b[1]);
    for(int i = 1; i < b.size(); i++)
    { 
      // euclidを全部にかけるのがポイントだった
      tmp = euclid(tmp, b[i]);
    }
    ans = tmp;
  }

  cout << ans << endl;
}
