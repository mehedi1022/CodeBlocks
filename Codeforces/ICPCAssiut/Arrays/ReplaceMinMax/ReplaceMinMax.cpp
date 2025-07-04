#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n, i, max, min, maxPos, minPos, t;
cin >> n;
long long arr[n];
for(i = 0; i < n; i++){
    cin >> arr[i];
}
max = arr[0];
maxPos = 0;
for(i = 1; i < n; i++){
    if(max < arr[i]){
        max = arr[i];
        maxPos = i;
    }
}
min = arr[0];
minPos = 0;
for(i = 1; i < n; i++){
    if(min > arr[i]){
        min = arr[i];
        minPos = i;
    }
}
 t = arr[minPos];
   arr[minPos] = arr[maxPos];
   arr[maxPos] = t;

for(i = 0; i < n; i++){
  

    cout << arr[i] << " ";
}
    return 0;
}