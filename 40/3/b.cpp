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
  vector<char> ans;

  rep(i, s.size()){
    if (s[i] == 'B') {
      if (ans.size() > 0)
        ans.pop_back();
    }
    else ans.push_back(s[i]);
  }

  rep(i, ans.size()){
    cout << ans[i];
  }
  cout << endl;
}
