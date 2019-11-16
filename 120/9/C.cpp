#include <stdio.h>
#include <iostream>
using namespace std;
long fibonacci(double n);

int main()
{
    // これはWAになってしまったコード

    long N, M, a, sum = 1;
    cin >> N >> M;
    long test[M];
    for (int i = 0; i < M; i++)
    {
        cin >> a;
        test[i] = a;
    }
    sum = fibonacci(test[0]);
    for (int i = 1; i < M; i++)
    {
        sum *= fibonacci(test[i] - test[i - 1] - 1);
        sum = sum % 1000000007;
    }
    sum *= fibonacci(N - test[M - 1]);
    sum = sum % 1000000007;
    cout << sum << endl;
}

long fibonacci(double n)
{
    double sqrt_5 = sqrtf(5.0f);
    long fib = (powf(((1.0f + sqrt_5) * 0.5f), n) - powf(((1.0f - sqrt_5) * 0.5f), n)) / sqrt_5;
    return fib % 1000000007;
}
