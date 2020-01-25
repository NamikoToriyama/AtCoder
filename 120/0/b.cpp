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

 vector<int> gcd_ex(unsigned a, unsigned b) {
  int m = min(a,b);
  int i = 1;
  vector<int> n;
  while (i <= m) {
    if (a%i == 0 && b%i==0){
      n.push_back(i);
    }
    i++;
  }
  return n;
}

int main() {
  int a, b, k;
  cin >> a >> b >> k;
  vector<int> num = gcd_ex(a, b);
  int i = num.size() - k;
  cout << num[i] << endl;
  // for (auto j : num){
  //   cout << j << endl;
  // }

}
