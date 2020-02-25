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
  ll N;
  cin >> N;
  
  if(N%2==1){ // 奇数は0が出てこない
    cout << 0 << endl;
    return 0;
  }

  ll d = N, div=10;
  ll ans = 0;
  while(div<=N){
    d = N;
    // cout << d << " " << div<< endl;
    d /= div;
    ans+= d;
    div *= 5;
  }
   
  cout << ans << endl;

}
