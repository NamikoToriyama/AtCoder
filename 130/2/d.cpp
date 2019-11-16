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
ll memo[2000 + 1][2000 + 1];
ll m = pow(10,9)+7;

void fact(int n){
    memo[0][0] = 1;
    memo[1][0] = 1;
    memo[1][1] = 1;
    for(int i = 1; i <= n; i++) {
        for(int j=0;j < i + 1;j++) {
      if (j == 0 || i == j) {
        memo[i][j] = 1;
      } else {
        memo[i][j] = (memo[i - 1][j - 1] + memo[i - 1][j]) % m;
      }
    }
    }

}

int main()
{
    ll n, k;
    cin >> n >> k;
    fact(n);

    for (int i = 1; i <= k; i++)
    { // i回目の時
        ll ans = memo[k - 1][i - 1] * memo[n - k + 1][i] % m;
        cout << ans << endl;
    }
}
