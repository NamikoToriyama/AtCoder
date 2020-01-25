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
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long
#define pb push_back

int main() {
  char N;
  cin >> N;

  if (N == 'A') {
    cout << 'T' << endl;
  } else if (N == 'T'){
    cout << 'A' << endl;
  } else if (N == 'C'){
    cout << 'G' << endl;
  } else if (N == 'G'){
    cout << 'C' << endl;
  }
  
}
