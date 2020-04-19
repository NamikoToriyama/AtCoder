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

int check_div_2(ll a){
  int cnt = 0;
  while(a%2 == 0){
    cnt++;
    a/=2;
  }
  return cnt;
}

int main() {
  int N;
  cin >> N;
  ll ans = 0, tmp;
  rep(i, N){
    cin >> tmp;
    ans += check_div_2(tmp);
  }
  cout << ans << endl;

}
