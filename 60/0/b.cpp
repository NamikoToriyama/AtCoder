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

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  bool flag = false;
  for(int n = A; n <= B*A; n+=A){
      if(n%B == C) flag = true;
  }
  if(flag) cout << "YES" << endl;
  else cout << "NO" << endl;
  
}
