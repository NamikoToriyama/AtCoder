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
#define r_rep(i, n) for(int i = (int)n-1; i >= 0; i--)
#define ll long long int
#define pb push_back
const long long MOD = 1000000007;
const long long INF = 1LL << 60;

int main() {
  int N;
  string s;
  cin >> N;

  map<string, int> person;

  rep(i, N){
    cin >> s;
    if ( person.find(s) != person.end() ) {
      person[s]++;
    } else {
      person.insert(make_pair(s, 1));
    }
  }

  int m_v = 0;
  string ans = "";
  for(auto itr = person.begin(); itr != person.end(); ++itr){
    string key = itr->first;
    int value = itr->second;
    if(value > m_v){
      m_v = value;
      ans = key;
    }
  }
  print(ans);

}
