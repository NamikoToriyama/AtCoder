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
    ll N, cnt = 0, a, ten, tmp;
    int zerocnt = 0;
    cin >> N;
    vector<ll> hat(N);
    // ２進数に直す
    for (int i = 0; i < N; i++)
    {
        cin >> a;
        if (a == 0)
            zerocnt++;
        tmp = 0;
        ten = 0;
        while (a > 1)
        {
            tmp += pow(10, ten) * (a % 2);
            a = a / 2;
            ten++;
        }
        tmp += pow(10, ten) * (a % 2);
        hat[i] = tmp;
    }

    bool flag = false;

    // 条件1: 全ての帽子が0の時
    if (zerocnt == N)
        flag = true;
    else if (zerocnt == N / 3)
    { // 条件2: xが書かれた帽子が2N/3枚、0がN/3枚
        int samenum = 0;
        int numcnt = 0;
        for (int i = 0; i < N; i++)
        {
            if (hat[i] != 0 && samenum == 0)
            {
                samenum = hat[i];
            }
            else if (samenum == hat[i])
            {
                numcnt++;
            }
        }
        if (numcnt == 2 * N / 3)
        {
            flag = true;
        }
    }
    else
    { // 条件3: x+y+z=0が成立する場合
        int x,y=0,z=0;
        x = hat[0]; 
        flag = true;
        for (int i = 1; i < N; i++)
        {
            if(hat[i]!=x && y==0){
                y = hat[i];
            } else if(hat[i]!=x && z==0){
                z = hat[i];
            }
            if(hat[i]!=x&&hat[i]!=y&&hat[i]!=z){
            flag = false;
            break;
            }
        }
        if(flag) {
            ll rakuda = x + y;
            string raku = to_string(rakuda);
            tmp = 0; ten = 0;
            for(int j=raku.size()-1;j>=0;j--){
                if(raku.at(j) == '2'){
                    rakuda -= pow(10,ten) * 2;
                    raku = to_string(rakuda);
             }
             ten++;
            }
            cout << rakuda <<" "<< x <<" "<< y <<" "<< z << endl;
            rakuda += z;
            raku = to_string(rakuda);
            tmp = 0; ten = 0;
            for(int j=raku.size()-1;j>=0;j--){
                if(raku.at(j) == '2'){
                    rakuda -= pow(10,ten) * 2;
                    raku = to_string(rakuda);
             }
             ten++;
            }
            if(rakuda != 0) flag = false;
        }
    }

    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
