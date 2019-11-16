#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int N, w, presum = 0, testsum = 0, sum = 0;
    cin >> N;
    int test[N];

    // このコードはO(N*N)
    // 和を保持しながら先頭から見ていくことでO(N)でとくこともできる

    for (int i = 0; i < N; i++)
    {
        // cin >> w;
        // test[i] = w;
        // sum += w;

        // こんな書き方もできたらしい
        cin >> test[i];
        sum += test[i];
    }

    // sum = sum / 2;
    // for (int i = 0; i < N; i++)
    // {
    //     testsum += test[i];
    //     if (sum < testsum)
    //     {
    //         presum = testsum - test[i];
    //         break;
    //     }
    // }
    // if (abs(presum - sum) > abs(testsum - sum))
    // {
    //     cout << abs(testsum - sum) * 2 << endl;
    // }
    // else
    // {
    //     cout << abs(presum - sum) * 2 << endl;
    // }

    // 解凍ではこんな感じ
    int mini = sum;
    for (int i = 0; i < N; i++)
    {
        presum += test[i];
        mini = min(mini, abs(presum - (sum - presum)));
    }
    cout << mini << endl;

}
