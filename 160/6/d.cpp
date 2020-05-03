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
  ll x;
  double t;
  cin >> x;

  rep(i, 300){
    rep(j, 300){
      if(pow(i, 5) + pow(j, 5) == x){
        cout << i << " " << 0-j << endl;
        return 0;
      }
      if(pow(i, 5) - pow(j, 5) == x){
        cout << i << " " << j << endl;
        return 0;
      }
    }
  }

}
