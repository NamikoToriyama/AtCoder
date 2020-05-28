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
#define r_rep(i, n) for(int i = n; i >= 0; i--)
#define ll long long int
#define pb push_back

const long long INF = 1LL << 60;

int main() {
  string s;
  cin >> s;
  int start, end;
  rep(i, s.size()){
    if(s[i] == 'A'){
      start = i;
      break;
    }
  }

  r_rep(i, s.size()){
    if(s[i] == 'Z'){
      end = i;
      break;
    }
  }
  print(end - start + 1);

}
