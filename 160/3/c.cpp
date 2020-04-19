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
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

int main() {
  int N, tmp;
  cin >> N;
  vector<int> a(N, 0);

  rep(i, N - 1){
    cin >> tmp;
    a[tmp-1]++;
  }

  rep(i, N){
    cout << a[i] << endl;
  }

}
