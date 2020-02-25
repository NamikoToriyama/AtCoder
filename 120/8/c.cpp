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
#define rep(i, n) for(int i = 0; i < (int)n; i++)

bool change_flag(bool flag){
  if(flag) return false;
  else return true;
}

int main() {
  int n,m,r, result;
  cin >> n >> m;

  ll t = pow(2, n); 
  int s[n][t];
  int c_num=t/2;
  bool c_flg = true;

  // 1,0の組み合わせを代入していく
  for(int i=0; i<n; i++) {
    for(int j=0; j<t; j++){
      if(c_flg){
        s[i][j]=(int)c_flg;
      } else{
        s[i][j]=(int)c_flg;
      }
      if((j+1)%c_num==0){
        c_flg = change_flag(c_flg);
      }
    }
    c_num /= 2;
  }

  int k;
  vector<vector<int> > switches;
  rep(i, m){
    cin >> k;
    vector<int> a(k);
    rep(j, k){
      cin >> a[j];
    }
    switches.push_back(a);
  }
  // あまりを入れていく
  vector<int> p(m);
  rep(i, m){
    cin >> p[i];
  }

  int ans = 0, cnt=0;
  rep(i, t){ // t通り試す
    cnt = 0;
    rep(j, m){ // スイッチたちを見ていく
      int s_cnt = 0;
      rep(k, switches[j].size()){
        s_cnt += s[switches[j][k] - 1][i];
      }
      if(s_cnt%2 == p[j]) cnt++;
    }
    if(cnt==m) ans++;
  }
  
  cout << ans << endl;

}
