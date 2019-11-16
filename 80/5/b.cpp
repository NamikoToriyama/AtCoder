#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define pb push_back

int main() {
  int n,cnt;
  cin >> n;
  cnt=n;
  vector<int> mochi(n,0);

  for(int i = 0; i < n; i++){
      cin >> mochi[i];
  }
  sort(mochi.begin(), mochi.end());
  int i=n-1;
  for(int i = 0; i < n-1; i++){
      if(mochi[i]==mochi[i+1]){
          cnt--;
      } 
  }

  cout << cnt << endl;

}
