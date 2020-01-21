#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <cstdlib>

//#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
  string s;
  cin >> s;
  int num = stoi(s);
  int yy = num/100;
  int mm = num % 100;
  if ((0 < yy && yy < 13) && (0 < mm && mm < 13)) cout << "AMBIGUOUS" << endl;
  else if (0 < mm && mm < 13) cout << "YYMM" << endl;
  else if (0 < yy && yy < 13) cout << "MMYY" << endl;
  else cout << "NA" << endl;;
  
}
