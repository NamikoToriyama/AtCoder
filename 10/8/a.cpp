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
#define ll long long int
#define pb push_back

int main() {
  int a[3];
  cin >> a[0] >> a[1] >> a[2];

  for(int i: a){
    int r = 4;
    if(a[0] <= i) r--;
    if(a[1] <= i) r--;
    if(a[2] <= i) r--;
    print(r);
  }
}
