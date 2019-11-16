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
    // g++ -std=c++11 -o d.o d.cpp
    int N, sum=0;
    cin >> N;
    vector<int> a(N);
    vector<int> x(N);
    for(int i=0;i<N;i++){
        cin >> a[i];
        sum += a[i];
    }
    x[0] = sum;
    // cout << x[0] << endl;
    for(int i=0;i<N/2;i++){
        x[0] -= 2*a[i*2 + 1]; 
    }
        // cout << x[0] << endl;

    for(int i=1; i<N;i++){
        x[i] = 2*a[i-1] - x[i-1];
    }
    for(int i=0; i<N;i++){
        cout << x[i] << " ";
    }
    cout << endl;
    
}
