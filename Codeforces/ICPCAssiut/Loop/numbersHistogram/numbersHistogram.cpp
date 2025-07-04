#include <bits/stdc++.h>
using namespace std;

int main(){
    char sb;
    int n, i, j, x;
    cin >> sb;
    cin >> n;
for(i = 0; i < n; i++){
    cin >> x;

    for(j = 0; j < x; j++){
        cout << sb;
    }
    cout << "\n";
}
    
    return 0;
}