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

int main() {
  int N;
  cin >> N;
  N %= 10;
  if(N==2 || N==4 || N==5 || N ==7 || N==9) print("hon");
  else if(N==0 || N==1 || N==6 || N==8) print("pon");
  else print("bon");
}
