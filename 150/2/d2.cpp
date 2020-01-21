#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;
#define ll long long
#define pb push_back
int N;

unsigned GetDigit(unsigned num)
{
  return log10(num);
}

int main()
{
  cin >> N;
  int cnt = 0;
  vector<vector<ll>> c(9,vector<ll>(9,0));

  for (int k = 1; k <= N; k++)
  {
    int a = k / pow(10, GetDigit(k));
    int b = k % 10;
    if (k < 10) // bが１桁の時
      b = k;
    a--;
    b--;
    if (b < 0)
      continue;
    c[a][b]++;
  }

  ll result = 0;
  for (int i = 0; i < 9; i++)
  { // O(1)
    for (int j = 0; j < 9; j++)
    { // O(1)
      result += c[i][j] * c[j][i];
    }
  }

  cout << result << endl;
}
