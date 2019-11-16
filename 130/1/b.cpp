#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int n,l,min,sum=0;
  cin >> n >> l;
  min = 2*l;

  for(int i=1; i<=n;i++){
      int a = l + i - 1;
       //cout << " a " <<a <<endl;
      if(abs(a) < abs(min)){
          min = a;
        //cout << min << endl;
      }
    sum += a;
  }
  //cout << sum << endl;
  //cout << min << endl;
  sum = sum - min;
  cout << sum << endl;

}
