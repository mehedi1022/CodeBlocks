#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, sum = 0;
    cin >> n;
    long long arr[n], i;
    for(i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(i = 0; i < n; i++){
        sum = sum + arr[i];
    }
    long long finalSum = abs(sum);
    cout << finalSum << endl;
}