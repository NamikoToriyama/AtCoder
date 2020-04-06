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
  int N, K;
  int r, s, p;
  string T;
  cin >> N >> K;
  cin >> r >> s >> p;
  cin >> T;
  ll sum = 0;
  string te = "";

  // K回目までのじゃんけん
  rep(i, K){
    if (T[i] == 'r'){
      sum += p;
      te += "p";
    } else if (T[i] == 's') {
      sum += r;
      te += "r";
    } else {
      sum += s;
      te += "s";
    }
  }

  // K回以降の手を決める
  for(int i = K; i < N; i++){
    if (T[i] == 'r' && te[i - K] != 'p'){
      sum += p;
      te += "p";
    } else if (T[i] == 's' && te[i - K] != 'r') {
      sum += r;
      te += "r";
    } else if (T[i] == 'p' && te[i - K] != 's')  {
      sum += s;
      te += "s";
    } else {
      te += "0";
    }
    // cout << sum << endl;
  }
 
  cout << sum << endl;

}
