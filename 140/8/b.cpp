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
#define ll long long
#define pb push_back

int main() {
  int N;
  string S, T;
  cin >> N >> S >> T;

  for(int i = 0; i < N; i++){
    cout << S.at(i) << T.at(i);
  }
  
  cout << endl;

}
