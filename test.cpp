#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <vector>
#include <algorithm>

//#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

int main() {
  int N;
  cin >> N;
  vector<int> cards(N);

    for (int i=0; i< N; i++) {
        cin >> cards[i];
    }
    sort(cards.begin(), cards.end());
    vector<int> sort_cards;
    for (int i=1; i<N; i++){
        if (cards[i] != cards[i-1]) {
            sort_cards.push_back(cards[i-1]);
            if (i == N - 1){
                sort_cards.push_back(cards[i]);
            } 
        }
    }

    for(int i=1; i<= N; i++){
        cout << sort_cards.size()/i << endl;
    }
}
