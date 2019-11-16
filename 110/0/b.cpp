#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;
#define ll long long
#define pb push_back

int main() { // 14min O(M) か O(N)
  int N, M, X, Y, x, y;
  cin >> N >> M >> X >> Y;
  int max_x = X, min_y = Y;
  bool flag = false;
  for(int i=0; i<N; i++){
      cin >> x;
      max_x = max(x, max_x);
  }
  for(int i=0; i<M; i++){
      cin >> y;
      min_y = min(y, min_y);
  }
  
  if(X < min_y){
      flag = true;
  }
  if(max_x >= min_y){
      flag = false;
  }

  if(flag){
      cout << "No War" << endl;
  } else {
      cout << "War" << endl;
  }

}
