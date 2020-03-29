#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long
#define pb push_back

int main() {
  string S;
  cin >> S;

  if (S[2]==S[3] && S[4] == S[5]) cout << "Yes" << endl;
  else cout << "No" << endl;
  
}
