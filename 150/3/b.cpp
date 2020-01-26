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
  int h, N, sum = 0;
  cin >> h >> N;
  int a[N];

  rep(i, N){
    cin >> a[i];
    sum += a[i];
  }

  if(h > sum) cout << "No" << endl;
  else cout << "Yes" << endl;
  
}
