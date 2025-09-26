#include<bits/stdc++.h>
using namespace std;
int main()
{
string s, t;
long long i, n;
cin >> s;
n = s.size();
bool pal = true;
for(i = 0; i < n / 2; i++){
    if(s[i] != s[n - 1 - i]){
        pal = false;
    }
}
if(pal){
    cout << "YES" << endl;
}else{
    cout << "NO" << endl;
}


    return 0;
}