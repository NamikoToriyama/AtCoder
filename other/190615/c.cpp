#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
using namespace std;
int cnt = 0;

int main()
{
    int n, x, mi, pi, sum;
    cin >> n;
    int r[n];
    vector<int> mem[100000 + 5]; // 保存用の配列
    for (int i = 0; i < n; i++) // repという入れ方もあるらしい
    {                           // O(N)
        cin >> r[i];
    }
    sort(r, r + n);

    if (n == 2)
    {
        mem[cnt].push_back(r[1]);
        mem[cnt++].push_back(r[0]);
        sum = r[1] - r[0];
    }
    else
    {
        int flag = 0;
        // 全部プラスマイナスでないかを判定
        if (r[0] >= 0)
            flag = 1;
        else if (r[n] <= 0)
            flag = -1;

        if (flag == 1)
        { //全部正の数
            for (int i = 1; i < n-1; i++)
            {
                mem[cnt].push_back(r[0]);
                mem[cnt++].push_back(r[i]);
                r[0] = r[0] - r[i];
            }
            mem[cnt].push_back(r[n-1]);
            mem[cnt++].push_back(r[0]);
            sum = r[n-1] - r[0];
        }
        else if (flag == -1)
        { // 全部負の数
            for (int i = 1; i < n; i++)
            {
                mem[cnt].push_back(r[0]);
                mem[cnt++].push_back(r[i]);
                r[0] = r[0] - r[i];
            }
            sum = r[0];
        }
        else
        { // プラマイ混合
            for (int i = 0; i < n; i++)
            {
                if (r[i] > 0)
                {
                    pi++;
                }
                else
                {
                    mi++;
                }
                sum += abs(r[i]);
            }
                for (int i = n - 1; i > mi; i--)
                { //プラス部分をマイナスにする
                    mem[cnt].push_back(r[0]);
                    mem[cnt++].push_back(r[i]);
                    r[0] = r[0] - r[i];
                }

                for (int i = 0; i < mi; i++)
                { //マイナス部分の計算をする
                    mem[cnt].push_back(r[mi]);
                    mem[cnt++].push_back(r[i]);
                    r[mi] = r[mi] - r[i];
                }            
        }
    }
             printf("%d\n", sum);

    for (int i = 0; i < n - 1; i++)
    {
        printf("%d %d\n", mem[i][0], mem[i][1]);
    }
}
