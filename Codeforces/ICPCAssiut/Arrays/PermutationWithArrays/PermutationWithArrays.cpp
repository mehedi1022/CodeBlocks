#include<bits/stdc++.h>
using namespace std;

void bubble(long long arr[], long long n){
    long long i, j, t;
    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n -i - 1; j++){
            if(arr[j] > arr[j + 1]){
                t = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = t;
            }
        }
    }
}
int main()
{
long long n, i, j;
cin >> n;
long long arr1[n];
for(i = 0; i < n; i++){
    cin >> arr1[i];
}
long long arr2[n];
for(i = 0; i < n; i++){
    cin >> arr2[i];
}
bubble(arr1, n);
bubble(arr2, n);

bool isSame = true;
for(i = 0; i < n; i++){
    if(arr1[i] != arr2[i]){
     isSame = false;
    }
}
if(isSame == true){
    cout << "yes" << endl;
}else{
    cout << "no" << endl;
}
return 0;
}