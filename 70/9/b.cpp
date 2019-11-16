#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define pb push_back

int main() {
  int n;
  cin >> n;
  vector<ll> data(n+1,0);

  data.at(0) = 2;
  data.at(1) = 1;

  if(n == 1){
      cout << 1 << endl;
  } else {
    for(int i=2; i<=n; i++){
        data.at(i) = data.at(i-2) + data.at(i-1);
        // cout << data.at(i) << endl;
    }
    cout << data.at(n) << endl;
  }

}
