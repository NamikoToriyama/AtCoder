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
  int N, K;
  cin >> N >> K;
  string s;
  cin >> s;
  char LR[s.size()];

  for(int i=0; i<s.size();i++){
      LR[i] = s.at (i);
  }
  int happy = 0;
  int flag = 0;
  for(int i = 0; i < N - 1; i++){
      if(LR[i] == LR[i+1]) happy++;
      else if(LR[i] != LR[i+1]) flag++;
  }

  for(int j = 0; j < K; j++){
    if(flag == 0) break;
    else if (flag == 1) {
        happy++;
        flag--;
    }
    else {
        happy +=2;
        flag -=2;
    }
  }
  
  cout << happy << endl;

}
