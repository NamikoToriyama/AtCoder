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
  int N, p;
  int cnt = 1;
  cin >> N;
  cin >> p;
  int min_p = p;

  for (int i=1; i<N; i++){
    cin >> p;
    if (p < min_p) {
      cnt++;
    }
    min_p =min(p, min_p);
  }
  
  cout << cnt << endl;

}
