#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n, l, r, people=0;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> l >> r;
        people += r - l + 1;
    }
    cout << people << endl;
}
