#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n, i, count = 1;
cin >> n;
string s;
cin >> s;
for(i = 1; i < n; i++){
    if(s[i] != s[i - 1]){
    count++;
    }
}
cout << count << endl;
    return 0;
}