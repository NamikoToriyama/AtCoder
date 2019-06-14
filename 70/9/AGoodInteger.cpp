#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n, a1, a2, a3, a4;
    cin >> n;
    a1 = n / 1000;
    a2 = (n - 1000 * a1) / 100;
    a3 = (n - 1000 * a1 - 100 * a2) / 10;
    a4 = n - 1000 * a1 - 100 * a2 - 10 * a3;

    if (a2 != a3)
    {
        cout << "No" << endl;
    }
    else if (a1 == a2 || a4 == a3)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
