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

int main() { // 8min
  string n;
  cin >> n;
  vector<int> nums(n.size());

  // char -> int 変換
  transform(n.begin(), n.end(), nums.begin(), [](char ch) { return ch - '0';});

  // 確認
  for(int i=0;i<3;i++){
    if(nums[i]==1) nums[i] = 9;
    else if(nums[i]==9) nums[i] = 1;
    cout << nums[i];
  }
  cout << endl;  

}
