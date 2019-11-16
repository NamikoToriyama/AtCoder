#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <tuple>

//#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
  string s;
  cin >> s;
  bool flag = true;

  if((s.at(0)-'0') > 2) flag = false;
  if((s.at(1)-'0') > 0) flag = false;
  if((s.at(2)-'0') > 1) flag = false;
  if((s.at(3)-'0') > 9) flag = false;
  if((s.at(3)-'0') == 9){
    if((s.at(5)-'0') > 0) flag = false;
    if((s.at(6)-'0') > 4) flag = false;
  }

  if(flag){
      cout << "Heisei" << endl;
  } else {
      cout << "TBD" << endl;
  }


}
