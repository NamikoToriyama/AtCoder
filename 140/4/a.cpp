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
  int a, b;
  cin >> a >> b;

  if (a <= 9 && b <= 9){
    cout << a * b << endl;
  } else {
    cout << -1 << endl;
  }

}
