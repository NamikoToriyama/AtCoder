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
  int N, K, M, a;
  cin >> N >> K >> M;
  long sum = 0;

  for(int i = 0; i < N - 1; i++){
    cin >> a;
    sum += a;
  }
  // 目標点数の合計
  long target = N * M; 
  // cout << target << " " << sum << endl;
  int b = target - sum;
  if (b <= K && b >= 0) {
    cout << b << endl; 
  } else if (b <= K && b < 0){
    cout << 0 << endl; 
  } else {
    cout << -1 << endl; 
  }

}
