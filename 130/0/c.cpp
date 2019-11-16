#include <stdio.h>
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
    int w, h, x, y;
    scanf("%d%d%d%d", &w, &h, &x, &y);
    printf("%lf %d\n", double(w)*double(h) / 2, x + x == w&&y + y == h);

    
}
