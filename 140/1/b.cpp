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
  string s;
  cin >> s;
  bool flag = true;

  int n = 0;
  for (char i: s){
    n++;
    if (n % 2 == 0 && i == 'R') {
      flag = false;
      break;
    }
    if (n % 2 == 1 && i == 'L') {
      flag = false;
      break;
    }
  }
  
  if (flag) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

}
