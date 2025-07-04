#include <bits/stdc++.h>
using namespace std;
int main(){
    long long t, n1, i, j, k, max;
    cin >> t;
    for(i = 0; i < t; i++){
        cin >> n1;
        long long arr[n1];
        for(j = 0; j < n1; j++){
            cin >> arr[j];
        }
        for(j = 0; j < n1; j++){
        max = arr[j];
        for(k = j; k < n1; k++){
        if(max < arr[k]){
         max = arr[k];
        }
        cout << max << " ";
        }
        }
        cout << endl;
        
    }
    return 0;
}