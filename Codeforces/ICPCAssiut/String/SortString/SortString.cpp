#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, i, freq[26] = {0};
    cin >> n;
    char c;

    for (i = 0; i < n; i++)
    {
        cin >> c;
        freq[c - 'a']++;
    }
    for (i = 0; i < 26; i++)
    {
        while (freq[i]--)
        {
            char res = i + 'a';
            cout << res;
        }
    }
    return 0;
}