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

int main() {
  string s;
  bool flag = false;
  cin >> s;

  if(s.at(0)==s.at(1) && s.at(2)==s.at(3)){
      flag = true;
  }
  if(s.at(0)==s.at(2) && s.at(1)==s.at(3)){
      flag = true;
  }
  if(s.at(0)==s.at(3) && s.at(2)==s.at(1)){
      flag = true;
  }

  if(s.at(0)==s.at(3) && s.at(2)==s.at(1) && s.at(0) == s.at(1)){
      flag = false;
  }

if(flag){
  cout << "Yes" << endl;
}else{
  cout << "No" << endl;

}
  

}
