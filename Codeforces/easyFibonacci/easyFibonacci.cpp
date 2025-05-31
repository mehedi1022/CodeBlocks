#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, f1 = 0, f2 = 1, i, t, j;
    cin >> n;

    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cout << 0 << " ";
        }
        if (i == 1)
        {
            cout << 1 << " ";
        }
    }
    for (j = 2; j < n; j++)
    {
        t = f2;
        f2 = f1 + f2;
        f1 = t;
        cout << f2 << " ";
    }

    return 0;
}