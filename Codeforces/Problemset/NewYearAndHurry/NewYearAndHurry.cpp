#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k, min, i, res, prob = 0;
    cin >> n >> k;
    min = 240 - k;
    
    for(i = 1; min >= prob; i++){
        prob = prob + i * 5;
        
    }
    i = i - 2;
    if(i > n){
        i = n;
    }
    cout << i << endl;
    return 0;
}