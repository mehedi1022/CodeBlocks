#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, rem, rev = 0, org;
    cin >> n;
    
    org = n;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n/10;
    }
     cout << rev << endl;
    if(org == rev){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    


}