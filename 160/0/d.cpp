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
  int N, X, Y, x, y;
  cin >> N >> x >> y;
  X = min(x, y);
  Y = max(x, y);
  vector<int> a(N-1);
  
  int tmp;
  for(int i = 1; i <= N; i++){
    for(int j = i + 1; j <= N; j++){
      if (i==j) continue;
      tmp = min(abs(j - i), abs(X - i) + abs(Y - j)+1);
      // printf("%d %d %d\n", i, j, tmp);
      a[tmp-1]++;
    }
  }

  rep(i, N-1){
    cout << a[i] << "\n";
  }
 
}