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
#define ll long long int
#define pb push_back

// intとll揃えてないのがダメだったのがまさかの原因だった
// 型はちゃんと揃える

int main() {
  int N;
  string s;
  cin >> N >> s;
  ll r = 0, g = 0, b = 0;

  for(char c : s){
    if (c == 'R') r++;
    if (c == 'G') g++;
    if (c == 'B') b++;
  }

  ll total = r * g * b;
   
  for(int i = 0; i < N; i++){
    for(int j = i + 1; j < N; j++){
      int k = 2 * j - i; 
      if (k >= N) break;
      if ((s[i] != s[j]) && (s[i] != s[k]) && (s[j] != s[k])) total--; // 全部違う場合は解になるため候補から外す
      // printf("%d %d %d\n", j, j + i, j + 2*i);
    }
  }
  
  cout << total << endl;

}
