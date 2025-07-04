#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, n, i, j, t, k, l;
    
    cin >> n;
    t = n;
    l = n;
    
    for(i = 0; i < n; i++){
        for(k = 1; k < l; k++){
            cout << " ";
        }
        l--;
    for(j = n - 1; j < t; j++){
    
        cout << "*" ;
    }
    
    cout << "\n";
    t = t + 2;
    }

    return 0;
}