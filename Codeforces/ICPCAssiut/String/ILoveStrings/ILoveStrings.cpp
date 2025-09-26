#include<bits/stdc++.h>
using namespace std;
int main()
{
long long tc, i;
cin >> tc;
for(i = 0; i < tc; i++){
long long j, k, n, m, l;
string s, t, res = "";
cin >> s >> t;
n = s.size();
m = t.size();
l = max(n, m);
for(j = 0; j < l; j++){
   if(j < n){
    res += s[j]; 
   }
   if(j < m){
    res += t[j];
   }
}
cout << res << endl;
}
    return 0;
}