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
  int N;
  float x,sum=0;
  string u;
  cin >> N;

  for(int i=0;i<N;i++){
    cin >> x >> u;
    if(u == "JPY") sum += x;
    if(u == "BTC") sum += 380000 * x;
  }

  cout << sum << endl;
  

}
