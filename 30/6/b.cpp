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
  string b;
  char a[N][N];

  rep(i, N){
    cin >> b;
    rep(j, N){
      a[i][j] = b[j];
    }
  }

  rep(i, N){
    r_rep(j, N){
      cout << a[j][i];
    }
    cout << endl;
  }

}
