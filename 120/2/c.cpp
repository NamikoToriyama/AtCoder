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
  int N, Q;
  string S;
  cin >> N >> Q >> S;

  vector<int> a(N, 0);
  int num = 0;
  for(int i = 0; i < N-1; i++){
    a[i] = num;
    if(S.at(i) == 'A' && S.at(i+1) == 'C'){
      num++;
    }
  }
  a[N-1] = num;


  int s, g;
  rep(i, Q){
    cin >> s >> g;
    cout << a[g-1] - a[s-1] << endl;
  }  

}
