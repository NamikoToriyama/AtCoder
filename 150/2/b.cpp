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
  int a, b;
  cin >> a >> b;

  int a_sum = 0, b_sum = 0;

  if(a < b) {
    for (int i=0; i<b; i++){
      a_sum += a * pow(10, i);
    }
    cout << a_sum << endl;
  } else {
    for (int i=0; i<a; i++){
      b_sum += b * pow(10, i);
    }
    cout << b_sum << endl;
  }
  
}
