#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <queue>

using namespace std;
#define ll long long
#define pb push_back

/* BFSのコード */

int cnt, h, w, xy[110][110]={-1}, sy, sx, gy, gx;
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
pair<int,int> p;
queue<pair<int,int> > q;
 
int bfs(int x,int y, vector<vector<char> > c){
  int xy[h][w];
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
  // for(int i =0; i<h; i++){
  //   for(int j =0; j < w; j++){
  //     cout << xy[i][j] << " ";
  //   }
  //   cout << endl;
  // }
	return xy[gy-1][gx-1];
}

int32_t main()
{
	cin >> h >> w >> sy >> sx >> gy >> gx;
  string s;
  vector<vector<char> > c(h, vector<char>(w));
	for(int i =0; i<h; i++){
    cin >> s;
		for(int j =0; j < w; j++){
			c[i][j] = s.at(j);
    }
  }
  int ans = bfs(sx-1, sy-1, c);
	
	cout << ans << endl;
}
