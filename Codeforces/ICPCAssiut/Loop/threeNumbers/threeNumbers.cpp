#include <bits/stdc++.h>
using namespace std;
int main(){
    int k, s, x, y, z, num = 0;
    cin >> k >> s;
    for(x = 0; x <= k; x++){
    for(y = 0; y <= k; y++){
    z = s - x - y;
    if(z >= 0 && z <= k){
        num++;
    }
    }
    }
    cout << num << endl;
    return 0;
}