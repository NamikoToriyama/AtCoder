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
  double p;
  if (N % 2 == 0){
    p = 0.5;
    cout << p << endl;
  } else {
    p = (N/2 + 1.0) / N;
    cout << p << endl;
  }
}
