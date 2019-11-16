#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main() {
  map<int, int> num;
  int n,a,max=-1, maxnum=0;
  cin >> n;
  for(int i= 0;i<n;i++){
    cin >> a;
    if(num.count(a)){
        num.at(a)++;
    } else {
        num.insert(make_pair(a,1));
    }    
  }

  for (auto p : num) {
    auto k = p.first;
    auto v = p.second;
    if(max<v){
        max = v;
        maxnum = k;
    }
    // cout << k << " => " << v << endl;
    }
    cout << maxnum << " " << max << endl;
  
}
