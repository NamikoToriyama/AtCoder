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

vector<int> solve(int N){
  vector<int> a(N,0);
  for (int i = 1; i <= N; i++) {
    int j = 1;
    while(i*j <= N){
      // cout << i*j << endl;
      a[i*j-1]++;
      j++;
    }
  }
  return a;
}

int main() {
  int N;
  cin >> N;
  vector<int> a = solve(N);
  int cnt=0;
  rep(i, N){
    // cout << a[i] << endl;
    if(a[i] == 8 && (i+1)%2 == 1) cnt++;
  }
  cout << cnt << endl;

}
