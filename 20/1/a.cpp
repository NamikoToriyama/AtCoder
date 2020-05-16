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
#define ll long long int
#define pb push_back

int main() {
  int N;
  cin >> N;
  vector<int> a;
  int cnt = 0;
  while(N > 0){
    if(N%2==1) {
      a.pb(1);
      cnt++;
    }
    else a.pb(0);
    N/=2;
  }
  print(cnt);
  int d = 1;
  for(int i: a){
    if(i!=0){
      print(i*d);
    }
    d*=2;
  }
}
