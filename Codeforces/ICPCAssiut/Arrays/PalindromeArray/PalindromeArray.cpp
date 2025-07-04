#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n, i, rev, l, find;
cin >> n;
l = n;
long long arr[n];
for(i = 0; i < n; i++){
    cin >> arr[i];
}

bool isPal = true;
for(i = 0; i < n; i++){
if(arr[i] != arr[l - 1]){
    isPal = false;
    break;
}
l--;
}
if(isPal == true){
    cout << "YES" << endl;
}else{
    cout << "NO" << endl;
}

    return 0;
}