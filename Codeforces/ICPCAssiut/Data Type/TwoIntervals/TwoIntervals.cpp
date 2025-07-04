#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b, c, d, max , min;
    cin >> a >> b >> c >> d;
    
    // l = max(a, c);
    if(a > c){
        max = a;
    }else{
        max = c;
    }
    // r = min(b, d);
    if(b < d){
        min =   b;
    }else{
        min = d;
    }

    if(max <= min){
        cout << max << " " << min << endl;
    }else{
        cout << "-1" << endl;
    }
    return 0;
}