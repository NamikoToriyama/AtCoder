#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    if (k == 1)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << n - k << endl;
    }
}
