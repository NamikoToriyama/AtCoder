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
#define ll long long int
#define pb push_back

int main() {
  int N;
  cin >> N;
  ll sum = 0;

  rep(i, N){
    int k = i + 1;
    if (k % 5 == 0 || k % 3 == 0) continue;
    else sum += k;
  }
  
  cout << sum << endl;

}
