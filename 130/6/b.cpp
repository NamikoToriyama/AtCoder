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
#define ll long long
#define pb push_back

unsigned GetDigit(unsigned num)
{
  return log10(num);
}

int main() {
  int N;
  cin >> N;
  int  cnt = 0;
  for (int i = 1; i <= N; i++) {
    if (GetDigit(i) % 2 == 0) cnt++;
  }
  
  cout << cnt << endl;

}
