#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long
#define pb push_back




ll power(ll a, ll n, ll m)
{
        ll ret = 1;
        for (; n > 0; n >>= 1, a = a * a % m)
        {
                if (n % 2 == 1)
                {
                        ret = ret * a % m;
                }
        }
        return ret;
}


int main() {
  ll N, M, P;
  cin >> N >> M >> P;
  
  cout << power(N, P, M) << endl;

}
