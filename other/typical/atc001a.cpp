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
int H, W;

void dfs(int x, int y, string **meiro, bool **reached)
{
    //cout << x << " : " << y << " : " << endl;
    if (x < 0 || H <= x || y < 0 || W <= y) // WとHが逆で引っかかってた
        return;
    // cout << "debug" << endl;
    if (meiro[x][y] == "#")
        return;
    //cout << "debug" << endl;
    if (reached[x][y])
        return;
    reached[x][y] = true;
    //cout << x << " : " << y << " : " << reached[x][y] << endl;

    // 4方向試す
    dfs(x - 1, y, meiro, reached);
    dfs(x + 1, y, meiro, reached);
    dfs(x, y - 1, meiro, reached);
    dfs(x, y + 1, meiro, reached);
}

int main()
{
    string m;
    cin >> H >> W;
    string meiro[H][W];
    bool reached[H][W];
    int x, y;

    // 配列に迷路を一つずつ入れる
    for (int i = 0; i < H; i++)
    {
        cin >> m;
        for (int j = 0; j < W; j++)
        {
            meiro[i][j] = m.at(j);
            reached[i][j] = false;
            if (meiro[i][j] == "s")
            {
                x = i;
                y = j;
            }
        }
    }

    string *maze[H];
    bool *reach[H];
    for (int i = 0; i < H; i++)
    {
        maze[i] = meiro[i];
        reach[i] = reached[i];
    }
    dfs(x, y, maze, reach);

    bool flag = false;
    for (int i = 0; i < H; i++)
    {
        for (int j = 0; j < W; j++)
        {
            if (meiro[i][j] == "g" && reached[i][j] == true)
            {
                flag = true;
            }
        }
    }

    if (flag)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
