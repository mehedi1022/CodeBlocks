#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin >> s;
long long i, n;
n = s.size();
long long freq[26] = {0};
for(i = 0; i < n; i++){
freq[s[i] - 'a']++;
}
for(i = 0; i < 26; i++){
    if(freq[i] > 0){
        char c = 'a' + i;
        cout << c << " : " << freq[i] << endl;
    }
}
    return 0;
}