#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int fx;
    long n, ncopy;
    bool flag = false;
    cin >> n;
    ncopy = n;
    
    // 各桁を足していくプログラム
    while(ncopy){
        fx += ncopy % 10;
        ncopy /= 10;
    }
    if (n % fx == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
