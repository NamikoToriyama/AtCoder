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

int main()
{
    // g++ -std=c++11 -o c.o c.cpp
    ll l, r;
    cin >> l >> r;
    int mod = 2019;
    int ans = 2019;

    if (r - l >= 2019)
    {
        cout << 0 << endl;
    }
    else
    {
        for (ll i = l; i < r; i++) // 2019の倍数が間に入っている場合
        {                          
            for (ll j = l + 1; j <= r; j++) // 2019*2019の全探索でも間に合う
            {
                ll tmp = (i * j) % 2019;
                if (tmp == 0)
                {
                    ans = 0;
                    break;
                }
                if (tmp < ans)
                {
                    ans = tmp;
                }
            }
        }

        cout << ans % mod << endl;
    }
}