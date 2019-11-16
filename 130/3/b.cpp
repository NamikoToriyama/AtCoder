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
    // g++ -std=c++11 -o b.o b.cpp
    int n, d;
    cin >> n >> d;
    int a[n][d];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < d; j++)
        {
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    double flag = 0;

    for (int i = 0; i < n; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            int sum = 0;

            for (int k = 0; k < d; k++)
            {
                sum += pow(a[i][k] - a[j][k], 2);
            }
            flag = sqrt(sum);
            // cout << flag << " " << sum << endl;
            if(flag-(int)flag != 0){
                continue;
            }
            if (sum % (int)flag == 0)
            {
                cnt++;
            }
        }
    }

    cout << cnt << endl;
}
