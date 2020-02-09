  #include <stdio.h>
  #include <iostream>
  #include <math.h>
  #include <string>
  #include <vector>
  #include <algorithm>
  #include <iomanip>

  //#include <tuple>

  //#include <bits/stdc++.h>
  using namespace std;
  #define rep(i, n) for(int i = 0; i < (int)n; i++)
  #define ll long long
  #define pb push_back

  int main() {
    string s, t, u;
    int a, b;
    cin >> s >> t >> a >> b >> u;

    if(u == s) a--;
    else if (t == u) b--;
    
    cout << a << " " << b << endl;

  }
