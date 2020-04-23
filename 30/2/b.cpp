#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <map>

//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

int main() {
  string s, t;
  int n, ans = 0;
  cin >> s >> n;
  map<string, int> maps;
  if (s.size() >= n) {
    for(int i = 0; i < s.size() - n + 1; i++){
      t = s.substr(i, n);
      if(maps.find(t) == maps.end()){ // 要素がないときinsertする
        maps.insert(make_pair(t, 1));
      } else {
        maps[t]++;
      }
    }
    ans = maps.size();
  }
  cout << ans << endl;
  
}
