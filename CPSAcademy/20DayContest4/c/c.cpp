#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, l, i, n, x;
    cin >> t;

    for(l = 0; l < t; l++)
    {
       
        cin >> n;

        long long total = 0;
        for (i = 0; i < n; ++i)
        {
            
            cin >> x;
            total += x;
        }

        long long root = sqrt(total);
        if (root * root == total)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}