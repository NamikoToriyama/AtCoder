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

int main() { // 9min
  int N,T,c,t;
  cin >> N >> T;
  vector<pair<int,int>> cost(N);

  for(int i=0; i<N; i++){
      cin >> c >> t;
      cost[i] = make_pair(c,t);
  }
  sort(cost.begin(), cost.end());

  for(int i=0; i<N; i++){
    if(cost[i].second <= T){
        cout << cost[i].first << endl;
        return 0;
    }  
  }
  cout << "TLE" << endl;
  
}
