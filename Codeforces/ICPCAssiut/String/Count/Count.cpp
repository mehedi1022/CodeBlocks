#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
long long i, sum = 0;
cin >> s;
for(i = 0; i < s.size(); i++){
    sum = sum + (s[i] - '0');
}
cout << sum;
    return 0;
}