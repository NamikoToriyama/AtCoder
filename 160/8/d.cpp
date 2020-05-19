#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <queue>
#include <map>

//#include <bits/stdc++.h>
using namespace std;
#define print(x) cout<<(x)<<endl
#define prints(x, y) cout<<(x)<<" "<<(y)<<endl
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long int
#define pb push_back

int N, M;
int cnt, a, b;
vector<vector<int> > path;
int p;
queue<int> q;
 
void bfs(){
  // チェック済みかどうかの配列
	vector<bool> check(N, true);
  vector<int> ans(N, -1);

  // 1番目のものを入れる
  check[0] = false;
	q.push(0);
  ans[0] = 0;
	
	while(q.size()){
		p=q.front(); //先頭の要素をqに入れる
		q.pop(); // 先頭の要素を取り出す
    
    for(int i: path[p]){
      if(check[i]) {
        q.push(i);
        check[i] = false;
        ans[i] = p+1;
      }
    }
	}
  // YesかNoを出力する用
  rep(i, N){
    if(ans[i] == -1){
      print("No");
      return ;
    }
  }
  print("Yes");
  for(int i = 1; i < N; i++){
    print(ans[i]);
  }
	return;
}

int32_t main()
{
	cin >> N >> M;
  path.resize(N);
  rep(i, M){
    cin >> a >> b;
    a--; b--;
    path[a].push_back(b);
    path[b].push_back(a);
  }
  bfs();
	return 0;
}