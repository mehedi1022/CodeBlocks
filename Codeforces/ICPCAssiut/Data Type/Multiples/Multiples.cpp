#include <bits/stdc++.h>
using namespace std;

int main(){
    long a , b, t;
    cin >> a >> b ;
    if(a > b){
        t = a;
        a = b;
        b = t;
    }
    if(b % a == 0){
        cout << "Multiples" << endl;
    }else{
        cout << "No Multiples" << endl;
    }
    return 0;
}