#include <stdio.h>
#include <iostream>
#include <math.h>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
typedef pair<int, int> pii;

int main()
{
    int n, p, q, cost = 1, a, b;
    cin >> n;
    int x[n], y[n];
    map<pii, int> dp;

    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                continue;
            // dp[pi,int]型 -> dp[{int,int},int]
            // ++されることで同じ数の差分は足される
            dp[{x[i] - x[j], y[i] - y[j]}]++;
        }
    }
    cout << "size:" << dp.size() << endl;
    int ret = n;
    for (auto out : dp)
    { // mapの要素宣言にはautoがいい
        ret = min(ret, n - out.second);

        cout << out.first.first << n-out.second << endl; // 被りがあった分だけコストは０になる
    }
    cout << ret << endl;
}
