#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define pb push_back

int main() {
  int n, a, cnt = 0, tmp, point=1;
  cin >> n;
  vector<int> light(n,0);

  for(int i = 0; i < n; i++){
      cin >> light[i];
  }

  while(cnt<n){
      tmp = light[point-1];
      cnt++;
      if(tmp == 2){
          break;
      } 
      point = tmp;

  }
  if(cnt>=n){
      cout << -1 << endl;
  }
  else{
      cout << cnt << endl;
  }

}
