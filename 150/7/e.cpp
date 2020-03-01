#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long
#define pb push_back
vector<int> abc(26, 0);
int kind;
vector<int> size;

void type1(string s, int ss, char cc){
  int c = cc - 'a';
  if (abc[c] > 0) {

  }

}

void type2(string s, int ss, int g){// O(1)
  cout << size[g] - size[ss] << endl;
}

void init(string s){
  kind = 0;
  int c;
  for (int i = 0; i < s.size(); i++){//O(50000)
    c = s.at(i) - 'a';
    if (abc[c] == 0) kind++;
    abc[c]++;
    size.push_back(kind);
  }
}

int main() {
  int N, Q;
  string s;
  cin >> N >> s >> Q;
  init(s);
  int t, ss, g;
  char c;

  rep(i, Q){
    cin >> t;
    if (t == 1){// type1...O(1)
      cin >> ss >> c;
      s.at(ss - 1) = c;
      type1(s, ss, c);
      // cout << s << endl;
    } else {//type2
      cin >> ss >> g;
      type2(s, ss, g);
    }
  }
  
  // cout << s << endl;

}
