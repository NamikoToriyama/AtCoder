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

// 未完成
int main() {
  string S;
  cin >> S;
  int sum = 0, cnt = 0;
  int r = 0, l = 0;

// <>>><<><<<<<>>><
// <1>3<2>1<4>3<1
// <4>3<4>0<4>3<1
  for (int i = 0; i < S.size() - 1; i++) {

    if (S.at(i) == '<') {
      r++;
    } 
    if (S.at(i) == '>') {
      l++;
    }
  }

  cout << r << " " << l << endl;

  sum = 1./2 * r * (r-1) + 1./2 * l * (l-1);

  
  cout << sum << endl;

}
