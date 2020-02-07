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
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long
#define pb push_back

int main() {
  int N;
  cin >> N;
  vector<int> a (N);
  rep(i, N){
    cin >> a[i];
  }
  int cnt = 1;
  rep(i, N){
    if(a[i] == cnt) cnt++;
  }
  cnt--;
  if (cnt == 0) cout <<  -1 << endl;
  else cout <<  N - cnt  << endl;

}
