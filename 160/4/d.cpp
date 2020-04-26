#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>

//#include <bits/stdc++.h>
using namespace std;
#define print(x) cout<<(x)<<endl
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

long long N;
string S;
int P = 2019;

long long solve() {
    vector<long long> val(P, 0);
    long long tenfactor = 1;
    long long cur = 0;
    val[cur]++;
    for (int i = 0; i < N; ++i) {
        cur = (cur + (S[N-i-1]-'0') * tenfactor) % P;
        tenfactor = (tenfactor * 10) % P;
        val[cur]++;
    }
    long long res = 0;
    for (int p = 0; p < P; ++p) res += val[p] * (val[p] - 1) / 2;
    return res;
}

int main() {
    cin >> S;
    N = S.size();
    cout << solve() << endl;
}
