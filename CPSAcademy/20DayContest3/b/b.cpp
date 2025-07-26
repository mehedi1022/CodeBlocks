#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n, k, i, j;
cin >> n;
for(i = 0; i < n; i++){
    cin >> k;
    long long count = 1;
    for(j = 1; ; j++){
    if( j % 3 == 0){
        continue;
    }
    if(j % 10 == 3){
        continue;
    }
    if(count == k){
        cout << j << endl;
        break;
    }
    count++;
    }
}
    return 0;
}