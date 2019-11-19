#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <tuple>

//#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
    int N;
    cin >> N;
    int b[N-1];

    for(int i = 0; i < N-1; i++){
        cin >> b[i];
    }

    int sum = 0;
    sum += b[0];
    // cout << b[0] << endl;
    for(int i=0; i < N-2; i++){
        sum += min(b[i],b[i+1]);
        // cout << min(b[i],b[i+1]) << endl;
    }
    sum += b[N-2];
    cout << sum << endl;

}
