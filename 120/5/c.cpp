#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

//#include <bits/stdc++.h>

// 最小の場合が解の時のケースが入っていなかった
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long
#define pb push_back

long euclid(long c, long d){ // 最大公約数を求めるプログラム
    long mx = max(c,d);
    long mi = min(c,d);
    long tmp=0;
    while(mi > 0){
        tmp = mx % mi;
        if(tmp==0){
            return mi;
        } else{
            mx = mi;
            mi = tmp;
        }
    }
    return 1;
} 

int main() {
  int N;
  cin >> N;
  vector<long> a(N);
  
  rep(i, N){
    cin >> a[i];
  }

  long min_num = euclid(a[N-1], a[0]);
  long tmp, index = 0;
  for(int i = 1; i < N; i++){
    tmp = euclid(a[i-1], a[i]);
    if(tmp <= min_num){
      index = i;
      min_num = tmp;
    }
  }


  vector<long> b;
  vector<long> c;
  // index番目
  rep(i, N) {
    if (i == index) continue;
    else {
      b.push_back(a[i]);
    }
  }

  // indexの前後
  if (index == 0) { // この場合はN-1番目がいらない
    for(int i = 0; i < N-1; i++){
      c.push_back(a[i]);
    }
  } else {
    for(int i = 0; i < N; i++){
      if (i == index-1) continue;
      else {
        c.push_back(a[i]);
      }
    }
  }

  int count = 0;
  for(int i = 1; i < N; i++){ // min_num自身が最小の場合
    tmp = euclid(a[i], min_num);
    if(tmp != min_num){
      count++;
    }
  }


  long b_ans, c_ans;
  // 最初の一つ目
  b_ans = euclid(b[N-2], b[0]);
  c_ans = euclid(c[N-2], c[0]);
  for(int i = 0; i < N-2; i++){
    b_ans = euclid(b_ans, b[i]);
    c_ans = euclid(c_ans, c[i]);
  }

  if (count == 1){
    b_ans = max(min_num, b_ans);
  }
  
  cout << max(b_ans, c_ans) << endl;

}
