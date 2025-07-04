#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, i;
    cin >> n;
    long long arr[n];
    for(i =0; i < n; i++){
    cin >> arr[i];
    }
    for(i = 0; i < n; i++){
        if(arr[i] > 0){
            arr[i] = 1;
        }
        if(arr[i] < 0){
            arr[i] = 2;
        }
        cout << arr[i] << " ";
    }
    return 0;
}