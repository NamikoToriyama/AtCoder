#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <queue>

using namespace std;
#define ll long long
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
int32_t main()
{
	cin>>h>>w;
	for(int i =0; i<h; i++)
		for(int j =0; j<w; j++)
			cin>>c[i][j];
	for(int i =0; i<h; i++)
		for(int j =0; j<w; j++)
			if(c[i][j]=='.')
				cnt = max(cnt, bfs(i,j));
	cout << cnt << endl;
	return 0;
}
