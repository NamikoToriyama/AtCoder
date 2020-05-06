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

int MAX_n = 100001;
vector<bool> a(100001, true);
vector<bool> c(100001, false);
vector<int> b(100001, 0);

// 素数配列を用意する
void init(){
  int p = 0;
  a[0] = false; a[1] = false;
  for(int i = 2; i < MAX_n; i++){
    if(a[i]){
      for(int j = i*2; j < MAX_n; j+=i){
        a[j] = false;
      }
    }
  }
  
  // 2017に似た和の累積和を求める
  for(int i = 2; i < MAX_n; i++){
    if(i%2==0) b[i] = b[i - 1];
    if(a[i] && a[(i+1)/2]) {
      b[i] = b[i - 1] + 1;
      c[i] = true;
    }
    else b[i] = b[i - 1];
  }
  
  // rep(i, 12){
  //   printf("%d %d %d %d\n", i, int(a[i]), b[i], int(c[i]));
  // }

}

int main() {
  int Q, l, r;
  
  cin >> Q;
  init();
  
  rep(i, Q){
    cin >> l >> r;
    cout << b[r] - b[l] + int(c[l]) << endl;
  }
  
}
