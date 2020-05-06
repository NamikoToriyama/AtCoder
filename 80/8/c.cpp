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
  int xy[3][3];
  rep(i, 3) rep(j, 3) cin >> xy[i][j];

  rep(i, 101){ // a1
    rep(j, 101){ // a2
      rep(k, 101){ // a3
        if(xy[0][0] - i ==  xy[1][0] - j && xy[0][0] - i ==  xy[2][0] - k){
          if(xy[0][1] - i ==  xy[1][1] - j && xy[0][1] - i ==  xy[2][1] - k){
            if(xy[0][2] - i ==  xy[1][2] - j && xy[0][2] - i ==  xy[2][2] - k){
              // printf("%d %d %d\n", i, j, k);
              print("Yes");
              return 0;
            }
          }
        }
      }
    }
  }
  print("No");
}
