#include <bits/stdc++.h>
using namespace std;
int main(){
    long long a, b, c, d, res, rem;
    cin >> a >> b >> c >> d;
    
    // (a × b) mod m = [(a mod m) × (b mod m)] mod m
    res = ((a % 100) * (b % 100) * (c % 100) * (d % 100)) % 100;
    // res = a % 100;
    // res = res * (b % 100) % 100;
    // res = res * (c % 100) % 100;
    // res = res * (d % 100) % 100;
    if(res < 10){
        cout << 0 << res << endl;
    }else{
        cout << res << endl;
    }

  
    
    return 0;
}