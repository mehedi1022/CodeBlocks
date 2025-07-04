#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, rem;
    cin >> n;
    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;
    }
    if(rem % 2 == 0){
        cout << "EVEN" << endl;
    }else{
        cout << "ODD" << endl;
    }
    
    
    return 0;
}