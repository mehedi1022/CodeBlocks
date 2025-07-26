#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, m, i, j, a;
    cin >> n >> m;
    vector < long long > a2(m + 1); 
    for(i = 0; i < m+1; i++){
        a2[i] = 0;
    }
    
    for(i = 0; i < n; i++){
        cin >> a;
        a2[a]++;
    }
    for(i = 1; i <= m; i++){
       cout << a2[i] << endl;
    }
    return 0;
}