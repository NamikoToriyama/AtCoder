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

int main() { // 11min
  int N,T,A,H;
  cin >> N >> T >> A;
  vector<float> temp(N);

  for(int i=0;i<N;i++){
      cin >> H;
      temp[i] = T - H*0.006;
    //   cout << temp[i] << endl;
  }

  int nearNum = 0;
  for(int i=1;i<N;i++){
      if(abs(A-temp[nearNum]) > abs(A - temp[i])){
        nearNum = i;
      }
  }

  
  cout << nearNum+1 << endl;

}
