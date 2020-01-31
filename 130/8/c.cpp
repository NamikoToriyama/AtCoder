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
  vector<float> v(N);
  // 具材を入れていく
  rep(i, N){
    cin >> v[i];
  }

  sort(v.begin(), v.end()); // O(NlogN)
  float ans = 0;
  rep(i, N - 1){
    v[i+1] = (v[i] + v[i+1])/2;
  }

  
  cout << setprecision(5) << v[N-1] << endl;

}
