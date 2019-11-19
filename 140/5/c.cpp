#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <iomanip>

#include <algorithm>

//#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
  int N;
  cin >> N;
  vector<int> x(N);
  vector<int> y(N);
  int kaijo=1;

  for (int i = 0; i < N; i++) {
    cin >> x[i] >> y[i];
    kaijo *= (i+1);
  }
  //cout << kaijo<< endl;

  // 各点の距離を求める
  double tmp;
  double sum = 0;
  int count = 0;
  for (int i = 0; i < N - 1; i++) {
    for (int j = i + 1; j < N; j++) {
      //cout << pow(x[i] - x[j], 2) << " " << pow(y[i] - y[j], 2) << endl;
      tmp = sqrt(pow(x[i] - x[j], 2) + pow(y[i] - y[j], 2));
      // cout << i <<" " << j  << " " << tmp  << endl;
      sum += tmp;
      count++;
    }
  }
  double total = sum * (kaijo * (N-1))/count;

  cout << setprecision(10) << total/kaijo << endl;
}
