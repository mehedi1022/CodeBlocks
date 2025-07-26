#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, f1 = 0, f2 = 1, i, t, j;
    cin >> n;
        if (n == 1)
        {
            cout << 0 << endl;
            return 0;
        }
        if (n == 2)
        {
            cout << 1 << endl;
            return 0;
        }
    for (i = 3; i <= n; i++)
    {
        t = f2;
        f2 = f1 + f2;
        f1 = t;
        
    }
    cout << f2 << endl;

    return 0;
}