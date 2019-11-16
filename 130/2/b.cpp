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
  int n;
  int cnt =0;
  cin >> n;
  vector<int> num(n);
  for(int i=0;i<n;i++){
      cin >> num.at(i);
  }
  for(int i=1;i<n-1;i++){
      if(num.at(i)<num.at(i+1)&&num.at(i)>num.at(i-1)){
          cnt++;
      }
      if(num.at(i)>num.at(i+1)&&num.at(i)<num.at(i-1)){
          cnt++;
      }
  }
  
  cout << cnt << endl;

}
