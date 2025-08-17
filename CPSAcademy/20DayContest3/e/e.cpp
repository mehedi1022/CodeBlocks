#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n, i, maxQ, responseN, length, quality, t, k;
cin >> t;
for(k = 0; k < t; k++){
cin >> n;
maxQ = INT_MIN;
responseN = 0;
for(i = 1; i <= n; i++){
cin >> length >> quality;
if(length > 10){
    continue;
}
if(quality > maxQ){
    maxQ = quality;
    responseN = i;
}
}
cout << responseN << endl; 
}

    return 0;
}