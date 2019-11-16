#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;
long long gcd(long long c, long long d);

int main() {
  long long a,b,c,d,total;
  cin >> a >> b >> c >> d;
  long long e = (c*d)/gcd(c,d);
  //cout << e << endl;
  //cout <<  b/c << b/d << (a-1)/c << (a-1)/d << b/e << (a-1)/e << endl;

  total = b/c - (a-1)/c + b/d - (a-1)/d;
  total -= (b/e - (a-1)/e);
  cout << b - a - total +1 << endl;

}

long long gcd(long long c, long long d){
    long long mx = max(c,d);
    long long mi = min(c,d);
    long long tmp=0;
    while(mi > 0){
        tmp = mx % mi;
        if(tmp==0){
            return mi;
        } else{
            mx = mi;
            mi = tmp;
        }
    }
    return 1;
} 
