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
  int s;
  cin >> s;
  vector<int> x;
  int n = s;
  bool flag = false;
  int onecnt = 0;
  while(onecnt!=2){
    x.push_back(n);
    if(n==1) onecnt++;
    if(n%2==0){
        n /=2;
    } else {
        n= 3*n+1;
    }
    
  }

  for(int i=0; i<x.size();i++){
      for(int j=i+1;j<x.size();j++){
          if(x[i] == x[j]){
              cout << j + 1<< endl;
              flag = true;
              break;
          }
      }
      if(flag) break;
  }
  

}
