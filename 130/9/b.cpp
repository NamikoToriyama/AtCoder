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
  int a,b;
  cin >> a >> b;
  int cnt = 0;
  int num = 1;

  while(b > num) {
    num--;
    num += a;
    cnt++;
  }
  
  cout << cnt << endl;

}
