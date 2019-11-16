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

int main() { // 2つ合わせて9min
  int N,p,sum=0,highest=0;
  cin >> N;
  for(int i=0;i<N;i++){
      cin >> p;
      sum += p;
      highest = max(highest,p);
  }
  sum -= highest/2;
  
  cout << sum << endl;

}
