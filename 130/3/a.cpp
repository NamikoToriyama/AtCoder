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
    // g++ -std=c++11 -o a.o a.cpp
    int n, a, b;
    cin >> n >> a >> b;
    if (a * n > b)
    {
        cout << b << endl;
    }
    else
    {
        cout << a * n << endl;
    }

}
