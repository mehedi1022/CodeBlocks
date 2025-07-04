#include <bits/stdc++.h>
using namespace std;

int main(){
    
    long long a, b, result;
    char s;
    cin >> a >> s >> b;
    result = a , s,  b;
    if(s == '*'){
        result = a * b;
        cout << result << endl;
    }else if(s == '-'){
        result = a - b;
        cout << result << endl;
    }else if(s == '+'){
        result = a + b;
        cout << result << endl;
    }else if(s == '/'){
        result = a / b;
        cout << result << endl;
    }

    return 0;

}