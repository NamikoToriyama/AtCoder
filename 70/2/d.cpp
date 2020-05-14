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
  cin >> N;
  vector<int> a(N);
  vector<int> b;


  rep(i, N){
    cin >> a[i];
    if(a[i] == i+1) b.push_back(a[i]);
  }

  int ans = b.size();
  for(int i = 1; i <b.size(); i++ ){
    if(b[i] == b[i-1]+1){
      ans--;
      i++;
    }
  }

  print(ans);

}
