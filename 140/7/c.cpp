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
#define ll long long
#define pb push_back

void print_aug(vector<vector<int> > aug){
  for(vector<int> a : aug){
    for(int i: a){
      cout << i << " ";
    }
    cout << endl;
  }
}

int main() {
  int N, A, x, y;
  cin >> N;
  vector<vector<int> > aug(N, vector<int>(N, -1));

  // 入力を入れていく
  rep(i, N){
    cin >> A;
    rep(j, A){
      cin >> x >> y;
      aug[i][x-1] = y;
    }
  }
  print_aug(aug);

  int max_cnt = 0, cnt;
  rep(i, N){ // i番目の人が正直者であると仮定する
    vector<int> a(N);
    cnt = 0;
    
    rep(j, N){ // 順番に調べていく
      bool flag = true;
      if(j==i) cnt++;
      if (a[j] == 0) continue; // 正直なことを言わない場合はスキップ
      else if (a[j] == 1){ // 正直な場合を確かめていく
        rep(k, N){
          if(a[k] != aug[i][k]) flag = false;
        }
      } else if (a[j] == -1){ // わからない場合を確かめていく
          rep(k, N){
            if(a[k] != aug[i][k]) flag = false;
          }
        }
        if(flag) cnt++;
      }
      
    max_cnt = max(max_cnt, cnt);
  }
  
  cout << max_cnt << endl;

}
