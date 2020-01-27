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

unsigned GetDigit(unsigned num)
{
  return log10(num)+1;
}

// 桁の合計を求める
long sumDigit(long N){
  // 桁数を求める
  int a = GetDigit(N);
  int sum = 0;
  // cout << a << endl;
  rep(i, a){
    sum += N%10;
    N /= 10;
  }
  return sum;
}

int main() {
  long N;
  cin >> N;
  int n = sumDigit(N);

  if(N%n == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
  
}
