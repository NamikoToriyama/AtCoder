#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;
#define ll long long
#define pb push_back

int main() { // 4min
  int a,b,c;
  cin >> a >> b >> c;

  int maxnum = max(a,max(b,c));
  int sum = maxnum*10 + a + b + c - maxnum;
  
  cout << sum << endl;

}
