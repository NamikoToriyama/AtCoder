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


int cnt, h, w, xy[110][110]={-1};
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
pair<int,int> p;
char c[110][110];
queue<pair<int,int> > q;
 
int bfs(int x,int y){
  // チェック済みかどうかの配列
	for(int i =0; i < h; i++){
		for(int j =0; j < w; j++){
			xy[i][j]=-1;
		}
	}
	q.push(pair<int,int>(x, y));
	xy[x][y]=0;
	while(q.size()){
		p=q.front(); //先頭の要素をqに入れる
		q.pop(); // 先頭の要素を取り出す
		for(int i = 0; i < 4; i ++){ // 1ノードで辿れるものを順番に見ていくことにより幅優先
			int nx = p.first + dx[i];
			int ny = p.second + dy[i];
			if(0 <= nx && nx <h  && 0 <= ny && ny < w && c[nx][ny] != '#' && xy[nx][ny]==-1){
				q.push(pair<int, int>(nx, ny));
				xy[nx][ny] = xy[p.first][p.second]+1;
			}
		}
	}
	return xy[p.first][p.second];
}

int main() {
  
  cin>>h>>w;
  int masu=0;
	for(int i =0; i<h; i++){
    for(int j =0; j<w; j++){
      cin>>c[i][j];
      if(c[i][j]=='.') masu++;
    }
  }
		
  bfs(0, 0);
      
  if(xy[h-1][w-1] == -1){
    print(-1);
  } else {
    print(masu - xy[h-1][w-1] - 1);
  }
	return 0;

}
