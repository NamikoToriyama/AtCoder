#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, x, cnt=1,sum;
    cin >> n >> x;
    int l[n];
    l[0]= 0;
    for(int i = 1; i<n+1; i++){
        cin >> l[i];
        sum = l[i-1] + l[i];
        l[i] = sum;
        if(sum <= x){
            cnt++;
        }
    }
    cout << cnt << endl;
}
