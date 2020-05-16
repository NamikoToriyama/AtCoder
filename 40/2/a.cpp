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
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

int main() {
  int A[3];
  cin >> A[0] >> A[1] >> A[2];

  int f = 0, s = 0;
  for(int i: A){
    if(i == 5) f++;
    if(i == 7) s++;
  }

  if(f==2 && s==1) print("YES");
  else print("NO");
}
