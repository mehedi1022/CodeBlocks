#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k, t, p, x, y, i;
    cin >> t;
    for (p = 0; p < t; p++)
    {
        cin >> n >> k;
        x = n - (k - 1);
        y = n - 2 * (k - 1);
        if (x >= 1 && x % 2 == 1)
        {
            cout << "YES" << endl;
            for (i = 1; i <= k - 1; i++)
            {
                cout << "1 ";
            }
            cout << x << endl;
        }
        else if (y >= 1 && y % 2 == 0)
        {
            cout << "YES" << endl;
            for (i = 1; i <= k - 1; i++)
            {
                cout << "2 ";
            }
            cout << y << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}