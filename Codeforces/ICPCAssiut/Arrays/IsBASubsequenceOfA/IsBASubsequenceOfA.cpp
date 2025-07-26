#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, m, i, j;
    cin >> n >> m;
    // long long arr1[n];
    vector <long long> arr1(n), arr2(m);
    for(i = 0; i < n; i++){
    cin >> arr1[i];
    }
    // long long arr2[m];
    for(i = 0; i < m; i++){
        cin >> arr2[i];
    }
    i = 0, j = 0;
    while (i < n && j < m)
    {
        if(arr1[i] == arr2[j]){
            j++;
        }
        i++;
    }
    if(j == m){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    
    return 0;
}