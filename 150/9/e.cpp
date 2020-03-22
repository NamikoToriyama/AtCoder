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

// 前に&をつけるとvectorの参照渡しになる
int solve(int x, int y, vector<string> tile, int H, int W, int count, vector<vector<bool> >& flag) {
    cout << count << ":" << y << ","<< x << endl;
    count++;
    flag[y][x] = false;
    if (tile[y + 1][x] == '0') {
        return count;
    } 
    if (y + 1 < H) {
        if (tile[y + 1][x] == '1' && flag[y + 1][x]) {
            count = solve(x, y + 1, tile, H, W, count, flag);
        }
    }
    if (y - 1 >= 0) {
        if (tile[y - 1][x] == '1' && flag[y - 1][x]) {
            count = solve(x, y - 1, tile, H, W, count, flag);
        }
    }
    if (x + 1 < W) {
        if (tile[y][x + 1] == '1' && flag[y][x + 1]) {
            count = solve(x + 1, y, tile, H, W, count, flag);
        }
    }
    if (x - 1 >= 0) {
        if (tile[y][x - 1] == '1' && flag[y][x - 1]) {
            count = solve(x - 1, y, tile, H, W, count, flag);
        }
    }
    return count;
}

int main() {
  int H, W, K;
  cin  >> H >> W >> K;
  vector<string> tile(H);
  vector<vector<bool> > flag(H, vector<bool>(W, true));
  int x, y, count = 0;

  for (int i = 0; i < H; i++) {
    cin >> tile[i];  
  }

  for (int i = 0; i < H; i++) {
      for (int j = 0; j < W; j++) {
        count = 0;
        if (flag[i][j]&& tile[i][j] == '1'){
          count = solve(j, i, tile, H, W, count, flag);
          cout << count << endl;
        }
        
      }
  }
  
    


}
