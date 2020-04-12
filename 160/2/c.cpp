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
#define ll long long int
#define pb push_back

long gcd(long c, long d){ // 最大公約数を求めるプログラム
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
  ll sum = 0;
  cin >> N;
  for(int i = 1; i <= N; i++){
    for(int j = 1; j <= N; j++){
      for(int k = 1; k <= N; k++){
        sum += gcd(i, gcd(j, k));
      }
    }
  }
  
  cout << sum << endl;

}
