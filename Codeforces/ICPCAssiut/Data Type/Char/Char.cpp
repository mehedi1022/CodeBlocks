#include <bits/stdc++.h>
using namespace std;
int main(){
    char a, b;
    cin >> a ;
    if(a >= 'A' && a <= 'Z'){
        b = a + 32;
    }else{
        b = a - 32;
    }
    cout << b << endl;
    return 0;
}