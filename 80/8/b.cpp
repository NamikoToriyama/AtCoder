#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define pb push_back

int main() {
  int n, a=0, b = 0;
  cin >> n;
  vector<int> card(n,0);

  for(int i = 0; i < n; i++){
      cin >> card[i];
  }
  sort(card.begin(), card.end());
  int i=n-1;
  while(i>=0){
      a+=card[i];
      i--;
      b+=card[i];
      i--;
  }

  cout << a-b << endl;

}
