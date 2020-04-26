#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <map>

//#include <bits/stdc++.h>
using namespace std;
#define print(x) cout<<(x)<<endl
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

int main() {
  int N;
  string s;
  cin >> N;
  map<string, int> m;

  rep(i, N){
    cin >> s;
    if(m.find(s) != m.end()){
      m[s]++;
    } else {
      m.insert(make_pair(s, 1));
    }
  }


  cout << m.size() << endl;

}
