#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
//#include <tuple>

//#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
  int N;
  cin >> N;
  string s;
  cin >> s;

  int cnt = 1;
  bool flag = false;
  for (int i = 0 ; i < N - 1; i++) {
    if (s.at(i) == s.at(i + 1)) {
      continue;
    } else {
      cnt++;      
    }
  }
  
  cout << cnt << endl;

}
