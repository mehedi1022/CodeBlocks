#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, x, i, find = -1;
    cin >> n;
    long long arr[n];
    for(i = 0; i < n; i++){
    cin >> arr[i];
    }
    cin >> x;
    for(i = 0; i < n; i++){
        if(arr[i] == x){
            cout << i << endl;
            find = 1;
            break;
        }
    }
    if(find == -1){
        cout << -1 << endl;
    }
    return 0;
}