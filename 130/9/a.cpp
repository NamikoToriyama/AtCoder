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
  string s, t;
  cin >> s >> t;
  int cnt = 0;

  for (int i = 0; i < s.size(); i++){
    if(s.at(i) == t.at(i)) cnt++;
  }
  
  cout << cnt << endl;

}
