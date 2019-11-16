#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <tuple>

//#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
  int N,M,C,a;
  cin >> N >> M >> C;
  vector<int> b(M);
  int cnt = 0;

  for(int i=0; i<M; i++){
      cin >> b[i];
  }

  for(int i=0; i<N; i++){
      int sum = 0;
    for(int i=0; i<M; i++){
      cin >> a;
      sum += a * b[i];
    }
    sum += C;
    if(sum >0) cnt++;
  }
  
  cout << cnt << endl;

}
