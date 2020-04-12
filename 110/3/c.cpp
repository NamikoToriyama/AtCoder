#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long
#define pb push_back

int main() {
  int N, M;
  ll p, y;
  cin >> N >> M;
  vector<pair<ll, pair<int, int> > > c; // number  

  rep(i, M){
    cin >> p >> y;
    c.push_back(make_pair(y, make_pair(i, p)));
  }
  sort(c.begin(), c.end());

  vector<pair<ll, pair<int, int> > > d;
  vector<int> n(N, 0);
  rep(i, M){
    n.at(c[i].second.second-1)++;
    d.push_back(make_pair(c[i].second.first, make_pair(c[i].second.second, n[c[i].second.second-1])));
  }
  sort(d.begin(), d.end());

  rep(i, M){
    printf("%06d%06d\n", d[i].second.first, d[i].second.second);
  }

}
