#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
using namespace std;

int main() {
  int n,a,b,time=0;
  bool flag = true;
  cin >> n;
  vector<pair<int, int> > pairs(n);
  for(int i=0;i<n;i++){
      cin >> a>>b;
      pairs[i] = make_pair(b,a);

  }
  sort(pairs.begin(),pairs.end());
  for(int i=0;i<n;i++){
      time += pairs[i].second;
    //   cout << "first" << pairs[i].first << "," << pairs[i].second<<"time" << time <<endl;
      if(pairs[i].first<time){
          flag = false;
          break;
      }
  }
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;

  //cout << pairs << endl;

}
