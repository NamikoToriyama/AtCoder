#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long
#define pb push_back

int main() {
  int D, N;
  cin >> D >> N;
  int div = pow(100, D);

  if (N == 100){
    cout << div*N + div << endl;
  } else {
    cout << div*N << endl;
  }
  
}
