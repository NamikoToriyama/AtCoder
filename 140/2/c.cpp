#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
//#include <tuple>

//#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
  int N,a;
  cin >> N;
  vector<pair<int, int> > s(N);
  for (int i = 0; i < N; i++){
    cin >> a;
    s[i].first = a;
    s[i].second = i + 1;
  }
  sort(s.begin(), s.end());
  for (int i = 0; i < N - 1; i++){
    cout << s[i].second << " "; 
  }
  
  cout << s[N-1].second <<  endl;

}
