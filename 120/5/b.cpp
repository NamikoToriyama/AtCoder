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
  int N, C, V;
  cin >> N;
  vector<int> value(N, 0);

  for (int i = 0; i < N; i++){
    cin >> V;
    value[i] = V;
  }
  for (int i = 0; i < N; i++){
    cin >> C;
    value[i] = value[i] - C;
  }
  int max_cost=0;
  for (int i = 0; i < N; i++){
    if (value[i] > 0) max_cost += value[i];
  }
  cout << max_cost << endl;
  
}
