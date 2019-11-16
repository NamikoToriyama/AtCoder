#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <map>

using namespace std;
#define ll long long
#define pb push_back

int main() {
  int n, m;
  string a;
  cin >> n;
  map<string, int> bc;
  for(int i = 0; i < n; i++){
      cin >> a;
      bc[a]++;
  }
  cin >> m;
  vector<string> rc(m);
  for(int i = 0; i < m; i++){
      cin >> a;
      bc[a]--;
  }
  int maxnum= 0;

  for (auto i : bc) {
		maxnum = max(maxnum,i.second);
	}

  cout << maxnum << endl;

}
