#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int a, b, cnt=0, icopy;
    cin >> a >> b;

    for(int i=a;i<=b;i++){
        if(i/10000 == i%10){
            icopy = i;
            icopy = (icopy/10)%1000;
            // cout << icopy << endl;
            if(icopy/100 == icopy%10){
                cnt++;
                // for debug
                // cout << i << endl;
            }
        }
    }
    cout << cnt << endl;
}
