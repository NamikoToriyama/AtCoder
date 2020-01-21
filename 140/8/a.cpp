#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <set>
//#include <tuple>

//#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
  int A, B;
  multiset<int> a = {1, 2, 3};
  multiset<int> b;
  multiset<int> result;

  cin >> A >> B;
  b.insert(A);
  b.insert(B);
  
  // 差集合を計算する
  set_difference(a.begin(), a.end(),
                  b.begin(), b.end(),
                  inserter(result, result.end()));
  
  std::for_each(result.begin(), result.end(), [](int x) {
    std::cout << x << std::endl;
  });

}
