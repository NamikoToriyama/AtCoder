#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n, k, x, sum=0;
    cin >> n >> k;

    for(int i = 0;i < n;i++){
        cin >> x;
        if(x > k-x){
            sum += k-x;
        } else {
            sum += x;
        }
    }
    cout << sum*2 << endl;
}
