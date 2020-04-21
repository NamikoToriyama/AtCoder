#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)

// https://drken1215.hatenablog.com/entry/2019/12/14/171657

// 1 つの証言を表す構造体
using pint = pair<int,int>; // 「人」と「0 or 1」

// 入力
int N;
vector<vector<pint> > v;

// 整数 bit に対応する「決め打ち」が整合しているかを判定
bool judge(int bit) {
    
    // i 人目の証言を検証する
    rep(i, N) {
        
        // i 人目が「不親切」だったら、証言はすべて無意味
        if ( !(bit & (1 << i)) ) continue;

        // それぞれ確認
        for (pint xy : v[i]) {
            int x = xy.first; // x が
            int y = xy.second; // y = 1: 正直、y = 0: 不親切

            // y = 1 なのに「不親切」だったらダメ
            if (y == 1 && !(bit & (1 << x))) return false;

            // y = 0 なのに「正直者」だったらダメ
            if (y == 0 && (bit & (1 << x))) return false;
        }
    }
    return true;
}


int main() {
    cin >> N;
    v.resize(N); // 大きさをNにする
    int A; 
    rep(i, N) {
        cin >> A;
        v[i].resize(A);
        rep(j, A) {
            cin >> v[i][j].first >> v[i][j].second;
            v[i][j].first--;
        }
    }

    int res = 0;
    rep(bit, 1 << N) {
        
        // 矛盾 check
        if (judge(bit)) {
            
            // bit に含まれる人数を数える
            int count = 0;
            rep(i, N) {
                if (bit & (1 << i)) count++;
            }
            res = max(res, count);
        }
    }

    cout << res << endl;
}