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
  int A, B;
  cin >> A >> B;
  int x;
  if (A < B) {
    x = B;
    B--;
  } else {
    x = A;
    A--;
  }
  
  x += max(A, B);
  cout << x << endl;

}
