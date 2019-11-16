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

int main() {
  int n,k,m;
  cin >> n;
  vector<int> d(n);
  for(int i=0;i<n;i++){
      cin >> d.at(i);
  }
  sort(d.begin(),d.end());
  m = n/2;
  k = d.at(m) - d.at(m-1);
  
  cout << k << endl;

}
