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
#define r_rep(i, n) for(int i = (int)n-1; i >= 0; i--)
#define ll long long int
#define pb push_back
const long long MOD = 1000000007;
const long long INF = 1LL << 60;

int main() {
  int N;
  cin >> N;
  vector<int> a(N);

  rep(i, N){
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());
  a.erase(std::unique(a.begin(), a.end()), a.end());
  print(a[1]);

}

void store(){
  int N;
  cin >> N;
  vector<int> a(N);

  rep(i, N){
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  reverse(a.begin(), a.end());

  int max_v = a[0];
  int j = 1;
  while(1){
    if (max_v != a[j]) {
      print(a[j]);
      break;
    }
    j++;
  }
}
