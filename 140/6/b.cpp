#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
//#include <tuple>

//#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
  int N;
  string s;
  cin >> N;
  cin >> s;

  for (char st : s) {
    char a = st + N;
    if (a > 90) {
      a -= 26; 
    }
    cout << a;
  }
  
  cout << endl;

}
