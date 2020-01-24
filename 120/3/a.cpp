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
  int N[5], k;
  rep(i, 5){
    cin >> N[i];
  }
  cin >> k;

  vector<int> check(5, 0);
  int flag = 1;
  rep(i, 5){
    for(int j = i+1; j < 5; j++){
      if (abs(N[i] - N[j]) > k) {
        flag = 0;
      }
    }
  }

  if(flag) cout << "Yay!" << endl;
  else cout << ":(" << endl;
  
}
