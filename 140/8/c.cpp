#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <numeric>



//#include <tuple>

//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long
#define pb push_back

template<class T> T gcd(T a, T b)
{
	while (true)
	{
		T r;
		if (a%b == 0) return b;
		else
		{
			r = a % b;
			a = b;
			b = r;
		}
	}
}

//最小公倍数
template<class T> T lcm(T a, T b)
{
  // cout << gcd(a, b) << endl;
	return a / gcd(a, b)*b;
}

int main() {
  ll a, b;
  cin >> a >> b;
  ll ans = lcm(a,b);
  cout << ans << endl;

}
