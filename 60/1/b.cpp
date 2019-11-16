#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define pb push_back

int main() {
  int n, m, a, b;
  cin >> n >> m;
  vector<int> point(n,0);

  for(int i = 0; i < m; i++){
      cin >> a >> b;
      point[a-1]++;
      point[b-1]++;
  }

  for(int i=0; i < n; i++){
      cout << point[i] << endl;
  }

}
