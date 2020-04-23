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

long lcm(long c, long d){ // 最小公倍数を求めるプログラム
    long mx = max(c,d);
    long mi = min(c,d);
    long tmp=0;
    while(mi > 0){
        tmp = mx % mi;
        if(tmp==0){
            return (c*d)/mi;
        } else{
            mx = mi;
            mi = tmp;
        }
    }
    return c*d;
} 

int main() {
  int a, b, n;
  cin >> a >> b >> n;
  ll c = lcm(a, b);

  if(c < n) {
    for(ll i = n; i < a*b*n; i++){
      if(i%a==0 && i%b==0){
        c = i;
        break;
      }
    }
  }
  
  cout << c << endl;

}
