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

int main() {
  string s, c, tmp;
  string front = "", back = "";
  bool flag = true; // trueならそのまま、backなら反転
  int N, q, f;
  cin >> s >> N;
  rep(i, N){
    cin >> q;
    if (q==1) {
      if (flag) flag = false;
      else flag = true;
      // 入れかえを行う
      tmp = front;
      front = back;
      back = tmp;
    }
    else if (q == 2){
      cin >> f >> c;
      if (f==1){ // 先頭につける
        front += c;
      } else { // 後ろにつける
        back += c;
      }
    }
    // cout << front << s << back << endl;
  }

  reverse(front.begin(), front.end());
  if (!flag) reverse(s.begin(), s.end());
  cout << front << s << back << endl;
  
}
