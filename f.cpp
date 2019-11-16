#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <tuple>
#include <map>

//#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
  int N;
  cin >> N;
  int slimes = pow(2,N);
  map<int,int> m;
  int max_hp = 0;
  int a;
  for(int i = 0; i < slimes; i++){
    cin >> a;
    max_hp = max(a, max_hp);
    m[a]++;
  }
    bool flag = true;
    int cnt = 1;
    if (m[max_hp] > 1) flag = false;
  for(int i = max_hp; i > 1; i--){
    if (m.count(i) == 0){
       continue;
    }
    else{
        if(cnt * N < m[i]) flag = false;
    }
  }

  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
  
}
