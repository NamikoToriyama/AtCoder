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
  vector<tuple<string,int, int>> book;
  int n,k,p;
  string s;
  cin >> n;
  // ソートしたいので(レストラン名、点数、インデックス)でデータ挿入
  for(int i=0;i<n;i++){
      cin >> s >> p;
      book.push_back(make_tuple(s, abs(p-100), i+1));
  }
  sort(book.begin(), book.end());
 

  for (auto t : book) {
    int y, z;
    string x;
    tie(x, y, z) = t;
    
    cout << z << endl;
  }

}
