#include <bits/stdc++.h>
using namespace std;
int main(){
    
    long long x, y, p, q, r;
    cin >> x >> y;
    p = x + y;
    q = x * y;
    r = x - y;
 
    cout << x << " "<< "+" << " "<< y << " "<< "=" << " "<< p << endl;
    cout << x << " "<< "*" << " "<< y << " "<< "=" << " "<< q << endl;
    cout << x << " "<< "-" << " "<< y << " "<< "=" << " "<< r << endl;
    
 
    return 0;
}