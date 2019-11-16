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
  int H,W,h,w;
  cin >> H >> W;
  cin >> h >> w;
  
  cout << H*W - (H*w+W*h) + h*w << endl;

}
