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

char CapitalToLetter(char c){
  if (c < 'a' || 'z' < c) {
    char a = 'a' + (c - 'A');
    return a;
  }
  return c;
}

char LetterToCapital(char c){
  if (c < 'A' || 'Z' < c) {
    char a = 'A' + (c - 'a');
    return a;
  }
  return c;
}

int main() {
  string s, ans = "";
  cin >> s;

  char c = s[0];
  ans += LetterToCapital(c);
  for (int i = 1; i < s.size(); i++){
    ans +=CapitalToLetter(s[i]);
  }
  print(ans);

}
