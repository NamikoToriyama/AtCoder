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
  int N, T;
  cin >> N >> T;
  vector<pair<double, pair<int,int>>> a(N);
  vector<pair<int,int>> b(N);
  int oishi, value, time_min=T;
  for (int i = 0; i < N; i++){
    cin >> oishi >> value;
    a[i].second.first = oishi;
    a[i].second.second = value;
    a[i].first = value/double(oishi);
    time_min = min(time_min, oishi);
  }
  cout << endl;
  int max_oishi = 0;
  sort(a.begin(), a.end());
  for(int i = 0; i < N;i++){
    cout << a[i].first << " " << a[i].second.first << " " << a[i].second.second << endl;
  }

  // とりあえず時間が小さい順に食べさせる
  int sum = 0;
  int time = 0;
  for(int i = N; i >=0;i--){
    //cout << a[i].first << " " << a[i].second << endl;
    sum += a[i].second.second;
    time += a[i].second.first + 1;
    if(time > T) break;
  }

  cout << sum << endl;

}
