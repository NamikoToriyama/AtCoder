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

int n_fact(int n) {
  if (n == 1) return 1;
  else return n_fact(n - 1);
}

int main() {
  int N;
  cin >> N;
  int a = 0, b = 0, c;
  for(int i = N; i >= 0; i--){
    cin >> c;
    a += c * pow(10, i-1);
  }
  for(int i = N; i >= 0; i--){
    cin >> c;
    b += c * pow(10, i-1);
  }
  cout << a<< " " << b << endl;
  
  // 1番上の桁をみる
  rep(i, n){
    
  }

}
