#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, i,j, low, pos;
    cin >> n;
    long long arr[n];
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }
    low = arr[0];
    pos = 1;
    for(j = 1; j < n; j++){
     
    if(arr[j] < low){
        low = arr[j];
        pos = j + 1;
    }
    }
    cout << low << " " << pos << endl;
    return 0;
}