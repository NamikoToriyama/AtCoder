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
  string N;
  cin >> N;

  if (N == "SUN") cout << 7 << endl;
  else if (N == "MON") cout << 6 << endl;
  else if (N == "TUE") cout << 5 << endl;
  else if (N == "WED") cout << 4 << endl;
  else if (N == "THU") cout << 3 << endl;
  else if (N == "FRI") cout << 2 << endl;
  else if (N == "SAT") cout << 1 << endl;
  
}
