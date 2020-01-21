#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

//#include <tuple>

//#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
int N;
int solve(int i, int N) { // iは11~99までの数
  int num = 0, cnt = 0;
  int one = i%10;
  int ten = i/10;
  if (ten == 0) ten=i;
  
  int n_one, n_ten=0;
  for (int j = 1; j <= N; j++){
    n_one = j%10;
    n_ten = j/10;
    if (n_ten == 0) n_ten=j;
    if (n_one == ten && n_ten == one) cnt++;
  }
  return cnt;
}

int main() {
  cin >> N;
  int cnt = 0;
  int len;
  int M = min(N, 99);
  vector<int> lst(M,0);

  // O(1)
  for (int i = 1; i <=M; i++) {
    if (i % 10 == 0) continue; // 10で割れる場合は逆の数が存在しない
    else {
      len = solve(i, N);
      cout << i << " " << len << endl;
      lst[i-1] = len;
    }
  }

  for(int i = 1; i <=N; i++) {
    int one = i%10;
    int ten = i/10;
    int num = one*10 + ten;
    
    if (i < 100) cnt += lst[i-1];
    else cnt += lst[i-1]*lst[num-1];
  }

  
  cout << cnt << endl;

}
