#include<bits/stdc++.h>
using namespace std;
int main()
{
long long i, j = 0, ts, ss;
string s;
cin >> s;
string t = "hello";
ss = s.size();
ts = t.size();
for(i = 0; i < ss; i++){
    if(s[i] == t[j]){
        j++;
        if(j == ts){
            break;
        }
    }
}
if(j == ts){
    cout << "YES" << endl;
}else{
    cout << "NO" << endl;
}


    return 0;
}