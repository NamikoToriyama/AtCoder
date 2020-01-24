#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

//#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

// この問題は必ず要素が1,2,3...だったらしい
// それならもう少し簡単に解けた気がする

bool equalArray(vector<int> v, vector<int> v2, int N){
  for (int i = 0; i < N; i++){
    if (v[i] != v2[i]){
      return false;
    }
  }
  return true;
}

int main() {
  int N, p;
  cin >> N;
  vector<int> v(N);
  vector<int> v2(N);
  for (int i = 0; i < N; i++) {
    cin >> p;
    v[i] = p;
    v2[i] = p;
  }
  sort(v2.begin(), v2.end());
  vector<int> tmp;
  for (int i = 0; i < N; i++){
    if (v[i] != v2[i]){
      tmp.push_back(i);
    }
  }
  // 交換する場合
  if (tmp.size() == 2){
    swap(v[tmp.at(0)], v[tmp.at(1)]);
  }
  // 配列が一致するかチェック
  if(equalArray(v, v2, N)) cout << "YES" << endl;
  else cout << "NO" << endl;
}
