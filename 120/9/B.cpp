#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, w, presum = 0, testsum = 0;
    float sum = 0;
    cin >> N;
    int test[N];

    for (int i = 0; i < N; i++)
    {
        cin >> w;
        test[i] = w;
        sum += w;
    }
    sum = sum / 2;

    for (int i = 0; i < N; i++)
    {
        testsum += test[i];
        if (sum < testsum)
        {
            presum = testsum - test[i];
            break;
        }
    }
    if (abs(presum - sum) > abs(testsum - sum))
    {
        cout << abs(testsum - sum) * 2 << endl;
    }
    else
    {
        cout << abs(presum - sum) * 2 << endl;
    }
}
