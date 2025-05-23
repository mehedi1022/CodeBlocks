#include <bits/stdc++.h>
using namespace std;

int main(){

int i, n;
cin >> n;
int arr[n];
for(i = 0; i < n; i++){
    cin >> arr[i];

}

int temp = arr[0];
for(i = 0; i<n; i++){
if(temp < arr[i] ){
    temp = arr[i];

}
}
cout << temp;


return 0;
}
