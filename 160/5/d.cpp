#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <map>

//#include <bits/stdc++.h>
using namespace std;
#define print(x) cout<<(x)<<endl
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

int main() {
  ll a, b, c, N, ans;
  cin >> a >> b >> N;
  ll e = b/N;
  // bで割った余りで考える
  if(b/N > 0 && b%N != 0){ // N がbより小さい場合
    ans = (a*N)/b - a*(N/b);
  } else {
    c = N - N % b - 1;
    ans = (a*(b-1))/b - a*((b-1)/b);
  }

  print(ans);

}
