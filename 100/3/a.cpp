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
  int A, B, C;
  cin >> A >> B >> C;
  int a = abs(A-B) + abs(B-C); // ABC // CBA
  int b = abs(A-C) + abs(C-B);//ACB // BCA
  int c = abs(B-A) + abs(A-C); // BAC // CAB
  int mi = min(a, min(b, c));
  cout << mi << endl;
  
}
