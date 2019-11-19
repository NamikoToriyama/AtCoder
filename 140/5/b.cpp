#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>

//#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
  int N;
  string s;
  cin >> N;
  cin >> s;
  bool flag = true;

  if (N %2 == 1) flag = false;

  for (int i=0; i<N/2; i++){
    //cout << s.at(i) << " " << s.at(N/2 + i) << endl;
    if (s.at(i) != s.at(N/2 + i)){
      flag = false;
      break;
    }
  }

  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;

}
