#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin >> s;
long long i = 0, n = s.size();
while(i < n){
     if (i + 4 < n && s[i] == 'E' && s[i + 1] == 'G' && s[i + 2] == 'Y' && s[i + 3] == 'P' && s[i + 4] == 'T') {
            cout << " ";   
            i += 5;        
        } else {
            cout << s[i];  
            i++;
        }
}
cout << endl;
    return 0;
}