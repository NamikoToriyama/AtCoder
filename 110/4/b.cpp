#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <tuple>

// #include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int ctoi(char c) {
	switch (c) {
		case '0': return 0;
		case '1': return 1;
		case '2': return 2;
		case '3': return 3;
		case '4': return 4;
		case '5': return 5;
		case '6': return 6;
		case '7': return 7;
		case '8': return 8;
		case '9': return 9;
		default: return 0;
	}
}

int main() {//15min?
  string s;
  cin >> s;

  int nearNum = -247;
  for(int i=0 ; i<s.size()-2; i++){
    int num = ctoi(s.at(i)) * 100 + ctoi(s.at(i+1) )* 10 + ctoi(s.at(i+2));
    //cout << num <<" " << ctoi(s.at(i))å << endl;
    if(abs(753-nearNum) > abs(753-num)){
        nearNum = num;
    }
  }
  
  cout << abs(753-nearNum) << endl;

}
