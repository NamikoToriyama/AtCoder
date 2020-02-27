#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
/// This is KUSO Code!!!!!
//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long
#define pb push_back

// スマートすぎる回答
// https://atcoder.jp/contests/abc136/submissions/10368936

void print_lr(vector<int> lr){
  for(int i: lr){
    cout << i << " ";
  }
  cout << endl;
}

vector<pair<char, int> > RunLengthEncoding(string s){
  char c = s[0];
  int cnt = 0;
  vector<pair<char, int> > rle;
  for(char i: s){
    if(c==i){
      cnt++;
    } else {
      rle.push_back(make_pair(c, cnt));
      c = i;
      cnt = 1;
    }
  }
  rle.push_back(make_pair(c, cnt));
  // デバッグ用
  // for(pair<char, int> p : rle){
  //   cout << p.first << " " << p.second << endl;
  // }
  return rle;
}

vector<int> gather(string s){
  int N = s.size();
  vector<int> x(N, 0);
  vector<pair<char, int> > rle = RunLengthEncoding(s);
  int num = rle[0].second - 1, j = 0;
  int r_num, l_num, ave, tmp, sum;
  rep(i, N){
    if(i == num){
      r_num = rle[j].second;
      l_num = rle[j+1].second;
      ave = (r_num + l_num)/2;
      sum = r_num+l_num;
      if(sum%2==0) { // 合計が2で割れる場合
        r_num = ave;
        l_num = ave;
      } else { // 合計が2で割れない場合
          r_num = ave + abs(sum - r_num+1)%2;
          l_num = ave + abs(sum - l_num+1)%2;
      }
      x[i] = r_num;
      x[i+1] = l_num;
      i++; // 0を代入しないで欲しいので二つ進める
      if (j + 2 < rle.size()){
        num += rle[j+1].second + rle[j+2].second;
        j += 2;
      }
    } else {
      x[i] = 0;
    }
  }
  return x;
}

int main() {
  string s;
  cin >> s;
  int N = s.size();
  vector<int> lr(N, 1);
  
  lr = gather(s);
  print_lr(lr);
}
