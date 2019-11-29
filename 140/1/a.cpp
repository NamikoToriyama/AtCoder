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
  string s;
  cin >> s;

  if(s == "Sunny") {
    cout << "Cloudy" << endl;
  } else if (s == "Cloudy") {
    cout << "Rainy" << endl;
  } else {
    cout << "Sunny" << endl;
  }

}
