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
  int k, a, b;
  cin >> k >> a >> b;
  for(int i = a; i <= b; i++){
    if(i%k == 0) {
      cout << "OK" << endl;
      return 0;
    }
  }
  print("NG");

}
