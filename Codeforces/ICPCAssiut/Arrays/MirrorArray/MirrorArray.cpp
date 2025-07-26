#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n, m, i, j;
cin >> n >> m;
long long arr[n][m];
for(i = 0; i < n; i++){
    for(j = 0; j < m; j++){
    cin >> arr[i][j];
    }
}
for(i = 0; i < n; i++){
    for(j = m - 1; j >= 0; j--){
    cout << arr[i][j] << " ";
    }
    cout << endl;
}
    return 0;
}