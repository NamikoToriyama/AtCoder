#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
  int a,b,c,s;
  cin >> s;
  a = s/100;
  b = (s - a*100)/10;
  c = (s - a*100 - b*10);
  cout << a+b+c << endl;

}
