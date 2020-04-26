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
#define print(x) cout<<(x)<<endl
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;
  bool flag = true;
  while(A > 0|| C > 0){
    A -= D;
    C -= B;
    // cout << A << " " << C << endl;
    if (C <= 0){
      break;
    }
    if(A <= 0){
      flag = false;
      break;
    }
    
  }

  if(flag){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

}
