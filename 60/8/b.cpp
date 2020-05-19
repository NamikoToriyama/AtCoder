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
  int N;
  cin >> N;
  int a[] = {1, 2, 4, 8, 16, 32, 64};

  rep(i, 7){
    if(a[i] > N){
      print(a[i-1]);
      return 0;
    }
  }
  print(64);
}
