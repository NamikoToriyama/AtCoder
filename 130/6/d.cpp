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
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long
#define pb push_back

void print_lr(vector<int> lr){
  for(int i: lr){
    cout << i << " ";
  }
  cout << endl;
}

vector<int> gather(string s, vector<int> lr){
  int N = s.size();
  vector<int> x(N, 0);
  rep(i, N){
    if(s[i] ==  'R'){
      x[i+1] += lr[i];
    } else {// それ以外
      x[i-1] += lr[i];
    }
  }
  return x;
}

int main() {
  string s;
  cin >> s;
  
  int N = s.size();
  vector<int> lr(N, 1);
  // 2パターン
  rep(i, 100000){
    lr = gather(s, lr);
  }
  
  print_lr(lr);
}
