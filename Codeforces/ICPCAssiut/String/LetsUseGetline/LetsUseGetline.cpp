#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    long long i;
    getline(cin, s);
    for(i = 0; i < s.size(); i++){
        if(s[i] == '\\'){
            break;
        }
        cout << s[i];
    }
    cout << endl;
    return 0;
}