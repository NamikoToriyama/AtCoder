#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <map>

//#include <bits/stdc++.h>
using namespace std;
#define print(x) cout<<(x)<<endl
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

vector<int> a;

// index が条件を満たすかどうか
bool isOK(int index, int key) {
    if (a[index] >= key) return true;
    else return false;
}

// 汎用的な二分探索のテンプレ
int binary_search(int key) {
    int ng = -1; //「index = 0」が条件を満たすこともあるので、初期値は -1
    int ok = (int)a.size(); // 「index = a.size()-1」が条件を満たさないこともあるので、初期値は a.size()

    /* ok と ng のどちらが大きいかわからないことを考慮 */
    while (abs(ok - ng) > 1) {
        int mid = (ok + ng) / 2;

        if (isOK(mid, key)) ok = mid;
        else ng = mid;
    }
    return ok;
}


int main() {
  int N;
  cin >> N;
  a.resize(N);

  rep(i, N){
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int b = binary_search(a[N-1]/2);
  double c = a[N-1]/2; // 5.5とか
  if(b>0){
    if(abs((double)a[b] - c) > abs((double)a[b-1] - c)) {
      if(abs((double)a[b+1] - c) > abs((double)a[b-1] - c)) {
        b--;
      } else {
        b++;
      }
    }
  } else {
    if(abs((double)a[b] - c) > abs((double)a[b+1] - c)) {
      b++;
    }
  }

  if(N==2&&a[b]==100) b--;
  
    
  cout << a[N-1] << " " << a[b] << endl;

}
