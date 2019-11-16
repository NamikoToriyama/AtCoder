#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
using namespace std;
 
int main() {
  int h, w;
  string tmp;
  cin >> h >> w;
  vector<string> a(w+2,"#");
  vector<string> b(h);
  for(int i=0;i<h;i++){
    cin >> b[i];
  }

  // 最初の囲い
  for(int i=0;i<w+2;i++){
      cout << a[i];
  }
  cout << endl;
  for(int i=0;i<h;i++){
    cout << "#" << b[i] << "#" << endl; 
  }
  // 最後の囲い
  for(int i=0;i<w+2;i++){
      cout << a[i];
  } 
  cout << endl;
  
}
