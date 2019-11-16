#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <tuple>

//#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
  int N;
  cin >> N;
  int a[N];
  int b[N];
  int c[N-1];

  // データを入れる
  for(int i=0; i < N; i++){
      cin >> a[i];
  }
  for(int i=0; i < N; i++){
      cin >> b[i];
  }
  for(int i=0; i < N - 1; i++){
      cin >> c[i];
  }

  int total = 0;
  int prenum = -100;
  for(int i=0; i < N; i++){
      int num = a[i] - 1;
      total += b[num];
    //   cout << b[num] << endl;
      if(prenum == num - 1){
          total += c[prenum];
        //   cout << c[prenum] << endl;

      }
      prenum = num;
  }
  
  cout << total << endl;

}
