#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i;
    string s;
char t;
    cin >> s;
    for (i = 0; i < s.size(); i++)
    {
        if(s[i] == ','){
            
            s[i] = ' ';
            
        }
        else if(s[i] >= 65 && s[i] <= 90){
            s[i] += 32;
        }
        else if(s[i] >= 97 && s[i] <= 122){
            s[i] -= 32;
        }
        
    }
    cout << s << endl;
    return 0;
}