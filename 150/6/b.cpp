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

int main() {
  int N, K;
  cin >> N >> K;
  int digit = 1;
  while(N>1){
    int i = N%K;
    N /= K;
    digit++;
    // cout << i << endl;
  }
  if(N==0) digit--;
  
  cout << digit<< endl;

}
