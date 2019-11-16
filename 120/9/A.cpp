#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int p, q, r, result;
    cin >> p >> q >> r;

    if (p >= q && p >= r)
    {
        result = q + r;
    }
    else if (q >= p && q >= r)
    {
        result = p + r;
    }
    else
    {
        result = p + q;
    }
    cout << result << endl;

    // 解説ではmax関数を使っている
    // コンパイル
    // g++ -std=c++11 -o a.o A.cpp
    cout << p + q + r - max({p, q, r}) << endl;

    return 0;
}
