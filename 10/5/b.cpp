#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>

//#include <bits/stdc++.h>
using namespace std;
#define print(x) cout<<(x)<<endl
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

int main() {
  int N, M, a, sum = 0;
  cin >> N;
  M = N;
  rep(i, N){
    cin >> a;
    sum += a;
    if (a == 0) M--;
  }
  if(sum%M != 0) print(sum/M+1);
  else print(sum/M);

}
