#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <tuple>

//#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
  int N ,l,sum =0,max_l=0;
  cin >> N;
  for(int i=0; i<N; i++){
    cin >> l;
    sum += l;
    max_l = max(l,max_l);
  }
  sum -= max_l;
//   cout << max_l << " " << sum;
  if(max_l<sum){
      cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
}
