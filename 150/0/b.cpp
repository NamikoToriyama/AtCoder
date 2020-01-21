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

int main() {
  int N;
  string s;
  cin >> N >> s;
  int cnt = 0;
  for (int i = 0; i < N-2; i++) {
    if (s.at(i) == 'A' && s.at(i+1) == 'B' && s.at(i+2) == 'C') {
      cnt++;
    }
  }
  
  cout << cnt<< endl;

}
