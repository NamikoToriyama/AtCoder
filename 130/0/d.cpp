#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main() {
// 尺取り法を使った方法
  long long int n,k,r=0;
  long long int sum,cnt=0;
  cin >> n >> k;
  long long int a[n];

  for(int i=0;i<n;i++){
      cin >> a[i];
  }

  for(int i=0;i<n;i++){
        while(sum<k){
            if (r == n) break;
            else{
                sum += a[r];
                r++;
            }
        }
        if (sum < k) break;
        cnt += n - r + 1 ;
        sum -= a[i];
        
  }
  
  cout << cnt << endl;

}
