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
#define ll long long
#define pb push_back

int main() {
  // llはintに読み替えてください
  ll N, M;
  cin >> N >> M;

  // 問題回答済みかどうかの配列
  vector<ll> p(N, 0);
  // wrongの配列
  vector<ll> wa(N, 0);
　
  ll pn; // 問題番号を入れる
  string s; // ACかWAか入れる

  for(int i = 0; i < M; i++){
    cin >> pn >> s;
    
    // ACの場合
    if (s == "AC"){
      p.at(pn-1) = 1; 
    } else { // WAの場合
      if (p.at(pn-1) == 0) { // 不正解の場合
        wa.at(pn-1)++; // waの配列の数を1増やす
        // 上はwa.at(pn - 1) = wa.at(pn - 1) + 1の書き方と同じ
      }
    }
  }

  ll rp = 0, rw=0;
  // ACとWAの数を数える
  for (int i = 0; i < N; i++) {
    rp += p.at(i); // WAのものは0になっているため無視して足して良い
    if (p.at(i) == 1) { // ACされているものの中でWAのものを数える
      rw += wa.at(i); 
    }
  }
  
  cout << rp << " " << rw << endl;

}
