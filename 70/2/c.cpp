#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <map>

//#include <bits/stdc++.h>
using namespace std;
#define print(x) cout<<(x)<<endl
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

int main() {
  int N, t;
  cin >> N;
  vector<int> a(100003, 0); // -1, 0, ..., 100001

  rep(i, N){
    cin >> t; // 0 | 100000
    a[t+2]++; // 2, 1 
    a[t+1]++; // 1, 0
    a[t]++; // 0, -1
  }

  int max_num = 0, max_index = 0;
  rep(i, 100003){
    if(a[i] > max_num){
      max_num = a[i];
      max_index=i;
    }
  }
  // print(max_index-1);
  print(max_num);

}
