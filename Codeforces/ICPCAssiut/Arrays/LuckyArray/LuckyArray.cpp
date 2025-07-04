#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n, i, low, count = 0;
cin >> n;
long long arr[n];

for(i = 0; i < n; i++){
    cin >> arr[i];
}
low = arr[0];
for(i = 0; i < n; i++){
    if(low > arr[i]){
        low = arr[i];
    }
}
for(i = 0; i < n; i++){
    if(low == arr[i]){
        count++;
    }
}
if(count % 2 == 1){
    cout << "Lucky" << endl;
}else{
    cout << "Unlucky" << endl;
}
    return 0;
}