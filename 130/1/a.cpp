#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int p, q, r, result;
    string s;
    cin >> s;
    bool flag = true;

    for (int i = 0; i < 3; i++)
    {
      if (s.at(i) == s.at(i+1)){
            flag = false;
      }
    }

    if (flag)
        cout << "Good" << endl;
    else
    {
        cout << "Bad" << endl;
    }
}
