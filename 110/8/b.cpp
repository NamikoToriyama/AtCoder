#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <tuple>

//#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
  int N,M,k,a;
  cin >> N >> M;
  vector<int> food(M,0);

  for(int i=0;i<N;i++){
      cin >> k;
      for(int j=0;j<k; j++){
          cin >> a;
          food[a-1]+=1;
      }
  }

  int cnt = 0;
  for(int i=0;i<M;i++){
    //   cout << i << ": food:" << food[i] << endl;
      if(N == food[i]) cnt++;
  }
  
  cout << cnt << endl;

}
