#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

//#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for(int i = 0; i < (int)n; i++)
#define ll long long
#define pb push_back

// わからないので今度やる

vector<int> dft(vector<int> f, int n){
  if (n == 1){
    return f;
  }
  vector<int> f0()
}

vector<int> multiply(vector<int> g, vector<int> h){
  vector<int> ff(g.size() + h.size() - 1, 0);
  n = pow_2_at_least(deg(g)+deg(h)+1);
  gg = dft(g, n);
  hh = dft(h, n);
  rep(i, n){
    ff.push_back(gg[i] * hh[i]);
  }
  return inverse_dft(ff, n)
}

int main() {
  int N;
  cin >> N;
  
  cout << setprecision(7) << N << endl;

}
