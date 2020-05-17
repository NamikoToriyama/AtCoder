#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <map>

//#include <bits/stdc++.h>
using namespace std;
#define print(x) cout<<(x)<<endl
#define prints(x, y) cout<<(x)<<" "<<(y)<<endl
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

// 桁数を求めるプログラム
unsigned GetDigit(unsigned num)
{
  return log10(num) + 1;
}

int main() {
  int a, b, c;
  cin >> a >> b;
  c = a*pow(10, GetDigit(b)) + b;
  if(sqrt(c) == int(sqrt(c))) print("Yes");
  else print("No");
}
