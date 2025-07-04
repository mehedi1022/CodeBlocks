#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, i;
    cin >> n;
    long long arr[n];
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(i = 0; i < n; i++){
        if(arr[i] <= 10){
            cout << "A[" << i << "]" << " " << "=" << " " << arr[i] << endl;
        }
    }
    return 0;
}