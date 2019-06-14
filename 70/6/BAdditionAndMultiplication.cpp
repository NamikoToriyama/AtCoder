#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n, k, board = 1, A, B;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        A = board * 2;
        B = board + k;
        if (A < B)
        {
            board = A;
        }
        else
        {
            board = B;
        }
    }
    cout << board << endl;
}
