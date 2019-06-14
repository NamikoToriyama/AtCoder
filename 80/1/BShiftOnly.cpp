#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n, a, cnt,min=100000;
    bool flag = true;
    cin >> n;

    for(int i=0;i<n;i++){
        cin >> a;
        for(int j = 0; j < min; j++){
            if(a%2 == 1){
                if(j < min){
                    min = j;
                }
                break;
            }
            a /= 2;
        }
    }
    
    cout << min << endl;
}
