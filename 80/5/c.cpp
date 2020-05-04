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
  int N, Y, t;
  cin >> N >> Y;

  rep(i, N + 1){
    rep(j, N + 1) {
      t = Y - 10000*i - 5000*j;
      if(t < 0) continue;
      if(t/1000 + i + j == N){
        printf("%d %d %d\n", i, j, t/1000);
        return 0;
      }
    }
  }

  cout << "-1 -1 -1" << endl;
}
