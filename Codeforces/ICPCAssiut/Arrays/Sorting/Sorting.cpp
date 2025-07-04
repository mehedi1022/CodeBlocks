#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, i, j, t;
    cin >> n;
    long long arr[n];
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(i = 0; i < n - 1; i++){
    for(j = 0; j < n - 1 - i; j++){
        if(arr[j] > arr[j + 1]){
            t = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = t;
        }
    }
    }
    //descending order
    // for(i = 0; i < n - 1; i++){
    // for(j = 0; j < n - 1 - i; j++){
    //     if(arr[j] < arr[j + 1]){
    //         t = arr[j];
    //         arr[j] = arr[j + 1];
    //         arr[j + 1] = t;
    //     }
    // }
    // }
    for(i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}