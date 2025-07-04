#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n;
    int b;
    cin >> n;

    b = n;
    
    double res = n - b;
    if(b == n){
        cout << "int" << " " << n << endl;
    }else{
        cout << "float" << " " << b << " " << res << endl;
    }
    return 0;
}