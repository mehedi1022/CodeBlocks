#include <bits/stdc++.h>
using namespace std;
int main(){
    char a;
    cin >> a;
    if(a >= '0' && a <= '9'){
     cout << "IS DIGIT" << endl;
    }else{
        cout << "ALPHA" << endl;
        if(a >= 'A' && a <= 'Z'){
        cout << "IS CAPITAL" << endl;
        }else{
            cout << "IS SMALL" << endl;
        }
    }

    return 0;
}