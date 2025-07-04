#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, d, e, f, first, second, third;
    cin >> a >> b >> c;
    d = a;
    e = b;
    f = c;
    
    if(a <= b && a <= c){
        first = a;
        if(b <= c){
            second = b;
            third = c;
        }else{
            second = c;
            third = b;
        }
    }else if(b <= a && b <= c){
        first = b;
        if(a <= c){
            second = a;
            third = c;
        }else{
            second = c;
            third = a;
        }
    }else{
        first = c;
        if(a <= b){
            second = a;
            third = b;
        }else{
            second = b;
            third = a;
        }
    }

    cout << first << endl;
    cout << second << endl;
    cout << third << endl;

    cout << endl;

    cout << d << endl;
    cout << e << endl;
    cout << f << endl;
    return 0;
}