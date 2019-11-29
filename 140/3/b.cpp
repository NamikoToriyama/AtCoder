#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
//#include <tuple>

//#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
  int N;
  cin >> N;
  int d[N];

  for (int i = 0; i < N; i++){
    cin >> d[i];
  }
  int total = 0;
  for (int i = 0; i < N - 1; i++) {
    for (int j = i + 1; j < N; j++) {
      // cout << total << " " << d[i] << " " << d[j] << endl;
      total += d[i] * d[j];
    }
  }
  
  cout << total << endl;

}
