#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>

//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

vector<ll> a; 

int main() {
  int N, M;
  ll cnt=0, tmp, b, c;
  cin >> N >> M;
  
  rep(i, N){
    cin >> tmp;
    a.push_back(tmp);
  }
  sort(a.begin(), a.end());

  vector<pair<ll, ll> > pairs(M);
  rep(i, M){
    cin >> pairs[i].second >> pairs[i].first;
  }
  sort(pairs.begin(), pairs.end());

  int j = a.size()-1;
  int k = pairs.size()-1;
  ll sum = 0;
  while(cnt != N){
    cnt++;
    if(a[j] > pairs[k].first){
      sum += a[j];
      j--;
    } else {
      sum += pairs[k].first;
      pairs[k].second--;
      if(pairs[k].second == 0) k--;
    }
  }

 
  cout << sum << endl;

}
