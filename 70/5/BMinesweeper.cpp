#include <stdio.h>
#include <iostream>
using namespace std;
int checkMine(string s, int w, int i, int j);


int main()
{
    // 未完成。配列なしで実装中。しんどいが過ぎる。
    int h, w, x, sum = 0;
    string s;
    string sweeper;
    cin >> h >> w;

    for (int i = 0; i < w; i++)
    {
        sweeper += '$';
    }
    for (int i = 0; i < h; i++)
    {
        cin >> s;
        sweeper += s;
    }
    for (int i = 0; i < w; i++)
    {
        sweeper += '$';
    }

    for (int i = 1; i < h + 1; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (sweeper.at(w * i + j) == '.')
            {
                sweeper.at(w * i + j) += 2; //0を代入
            }
        }
    }

    for (int i = 1; i < h + 1; i++)
    {
        for (int j = 0; j < w; j++)
        {
            if (sweeper.at(w * i + j) == '#')
            {
                for (int k = i - 1; k < i + 2; k++)
                {
                    for (int l = j - 1; l < j+2; l++)
                    {
                        cout << k << "&"<< l << w * k + l << endl;
                        if(w * k + l > 0 && w * k + l < w*w ){
                            int checker = checkMine(sweeper, w, k, l);
                            sweeper.at(w * k + l) += checker;
                        }
                    }
                }
            }
        }
    }
    cout << sweeper << endl;

    for (int i = 1; i < h + 1; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cout << sweeper.at(w * i + j);
        }
        cout << endl;
    }    
}

int checkMine(string s, int w, int i, int j)
    {
        if (s.at(w * i + j) == '#'){
            return 0;
        }
        if(i < 0){
            return 0;
        }
        if(j < 0){
            return 0;
        }
        return 1;
    }
