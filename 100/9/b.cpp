#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

//#include <tuple>

//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long
#define pb push_back

int main() {
  int N;
  cin >> N;
  vector<string> shiritori(N);
  // しりとりを代入
  rep(i, N) {
    cin >> shiritori[i];
  }
  // 同じ文字がが存在していないか比較
  rep(i, N){
    for(int j = i+1; j < N; j++) {
      if (shiritori[i].compare(shiritori[j]) == 0) {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  // ちゃんとしりとりになっているか確認
  rep(i, N-1){
    char last = shiritori[i].at(shiritori[i].size()-1);
    char start = shiritori[i+1].at(0);
    if (last != start) {
      cout << "No" << endl;
      return 0;
    }
  }
  
  cout << "Yes" << endl;

}
