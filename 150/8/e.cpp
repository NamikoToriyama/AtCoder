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
int P;

long long solve() {
    // 2と5は大丈夫
    if (P == 2 || P == 5) {
        long long res = 0;
        for (int i = 0; i < N; ++i) {
          if ((S[N-i-1]-'0') % P == 0) {
            res += N-i;
          }
        }
        return res;
    }

    vector<long long> val(P, 0);
    long long tenfactor = 1;
    long long cur = 0;
    val[cur]++;
    for (int i = 0; i < N; ++i) {
        cur = (cur + (S[N-i-1]-'0') * tenfactor) % P; // 和をmodでとっても結果は変わらないのでわる
        tenfactor = (tenfactor * 10) % P;
        val[cur]++;
    }
    long long res = 0;
    // 2この選択肢の個数を数える
    for (int p = 0; p < P; ++p) {
      res += val[p] * (val[p] - 1) / 2;
    }
    return res;
}

int main() {
    cin >> N >> P >> S;
    cout << solve() << endl;
}
