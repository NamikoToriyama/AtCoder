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
  int N;
  cin >> N;
  vector<int> l(N);

  rep(i, N){
    cin >> l[i];
  }
  sort(l.begin(), l.end());

  int ans = 0;
  int a, b, c;
  // O(N*N*logN)
  for(int i = N; i > 0; i--){
    a = l[i];
    for(int j = i-1; j >=0; j--){
      b = l[j];
      // 2分探索する ... O(logN)
      int left = 0, right = j-1; // 配列 a の左端と右端
      if(right < left) continue;
      int key = abs(a-b), mid;
      while (right >= left) {
        // cout << right << " " << left << endl;
        mid = left + (right - left) / 2; // 区間の真ん中
        if (l[mid] > key) right = mid - 1;
        else if (l[mid] <= key) left = mid + 1;
      }
      if(l[left] > key) ans+= j-left;
      // cout << l[left] << " : " << key << endl;
    }
  }
  
  cout << ans << endl;

}
