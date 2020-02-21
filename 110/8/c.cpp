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
  vector<int> a(N);
  rep(i, N){
    cin >> a[i];
  }

  // それぞれについての最大公約数を求める
  long tmp = a[0];
  rep(i, N){
    tmp = euclid(tmp, a[i]);
  }
  cout << tmp << endl;

}
