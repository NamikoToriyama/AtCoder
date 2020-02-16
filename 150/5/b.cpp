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
  int N;
  cin >> N;
  vector<int> a(N);

  rep(i, N){
    cin >> a[i];
  }
  
  bool flag = true;
  rep(i, N){
    if (a[i]%2 == 0){
      if(a[i]%3!=0 && a[i]%5!=0) flag = false;
    }
   }
  
  if (flag) cout << "APPROVED" << endl;
  else cout << "DENIED" << endl;  

}
