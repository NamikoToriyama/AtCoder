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
#define prints(x, y) cout<<(x)<<" "<<(y)<<endl
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  vector<int> ball(N, 0);
  vector<int> b;

  rep(i, N){
    cin >> a[i];
  }

  for(int i = N-1; i >= 0; i--){// 上から順に入れるかみていく
    int sum = 0;
    for(int j = i; j < N; j = j + i+1){ // トータルの個数をみていく
      sum += ball[j];
    }
    // print(sum);
    if(sum%2!=a[i]){
      ball[i] = 1;
      b.push_back(i+1);
    }
  }

  sort(b.begin(), b.end());
  print(b.size());
  if(b.size() > 0){
    for(int n: b){
      cout << n << " ";
    }
  cout  << endl;
  }

}
