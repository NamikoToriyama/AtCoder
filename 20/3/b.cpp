#include <stdio.h>
#include <iostream>
#include <cmath>
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
#define r_rep(i, n) for(int i = (int)n-1; i >= 0; i--)
#define ll long long int
#define pb push_back
const long long MOD = 1000000007;
const long long INF = 1LL << 60;

int main() {
  int N;
  string S;
  cin >> N >> S;

  

  if (S[N/2] != 'b') { 
    print(-1);
    return 0;
  }

  if((N-1)%2 != 0) { // 偶数文字の時
    print(-1);
    return 0;
  }

  // シミュレーションする
  vector<char> a;
  vector<char> b;
  int cnt = 0, size_cnt = 1;
  while(size_cnt < N){
    cnt++;
    if(cnt%3==1){
      b.push_back('a');
      a.push_back('c');
    }
    if(cnt%3==2){
      b.push_back('c');
      a.push_back('a');
    }
    if(cnt%3==0){
      b.push_back('b');
      a.push_back('b');
    }
    size_cnt += 2;
  }

  string t = "";
  r_rep(i, b.size()){
    t += b[i];
  }
  t += 'b';
  rep(i, a.size()){
    t += a[i];
  }

  // print(t);
  if(t == S){
    print(cnt);
  } else {
    print(-1);
  }

}
