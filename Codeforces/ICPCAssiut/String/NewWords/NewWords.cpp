#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin >> s;
long long i, e, g, y, p, t, res, n = s.size(), freq[26] = {0};
for(i = 0; i < n; i++){
    s[i] = toupper(s[i]);
    freq[s[i] - 'A']++;
}
e = freq['E'-'A'];
g = freq['G'-'A'];
y = freq['Y'-'A'];
p = freq['P'-'A'];
t = freq['T'-'A'];

res = min({e, g, y, p, t});
cout << res << endl;
    return 0;
}