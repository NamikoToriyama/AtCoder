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
  int N, R;
  cin >> N >> R;

  if(N>=10){
    cout << R  << endl;
  } else {
    cout << R + 100*(10-N) << endl;
  }
  
  

}
