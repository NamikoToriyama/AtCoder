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
  #define ll long long int
  #define pb push_back

  int char_to_int(char c)
  {
    if (c == '0') return 0;
    if (c == '1') return 1;
    if (c == '2') return 2;
    if (c == '3') return 3;
    if (c == '4') return 4;
    if (c == '5') return 5;
    if (c == '6') return 6;
    if (c == '7') return 7;
    if (c == '8') return 8;
    if (c == '9') return 9;
    else return -1;
  }

  int main() {
    string N;
    cin >> N;
    // 一桁ずつに修正する
    vector<int> a;

    a.push_back(0);
    for(char c: N){
      char r = char_to_int(c);
      a.push_back(r);
    }
    int digit = N.size();
    // rep(i, digit+1){
    //   cout << a[i] << endl;
    // }

    ll ans = 0;

    for(int i = digit; i >= 1; i--) {
      if (a[i] >= 10) {
        a[i-1]++;
        a[i] = a[i] - 10;
      }

      if (a[i] == 5 && a[i-1] < 5){
        ans += a[i];
        // cout << a[i] << " ";
      } else if(a[i] >= 5) { // 5以上なら一つ上のお金に払ってもらう
        ans += 10 - a[i];
        // cout << 10 - a[i] << " ";
        a[i-1]++;
      } else { // ５より小さい場合はこのお金ではらう
        ans += a[i];
        // cout << a[i] << " ";
      }
    }
    ans += a[0]; 
    
    cout << ans << endl;

  }
