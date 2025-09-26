#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    long long i, n = s.size(), count = 0;
    bool inWord = false;

    for (i = 0; i < n; i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            if(!inWord){
                count++;
                inWord = true;
            }
        }
        else{
            inWord = false;
        }
    }
    cout << count << endl;

    return 0;
}