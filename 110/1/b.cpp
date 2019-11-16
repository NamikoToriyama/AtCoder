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

int main() { // 12min
  int N,x;
  cin >> N;
  
  int ten = N / 10; // 10の位
  int hun = N /100; // 100の位

 
      if(ten - hun*10 <= hun ) {
          x = hun * 100 + hun * 10 + hun;
          if(x < N) {
            hun++;
             x = hun * 100 + hun * 10 + hun;
          }
      } else {
          hun++;
          x = hun * 100 + hun * 10 + hun;
      }

  

  cout << x << endl;

}
