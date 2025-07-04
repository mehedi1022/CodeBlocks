#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x, n, i, j, t, k, l, p, q, r, m, s;

    cin >> n;
    t = n;
    l = n;

    for (i = 1; i <= n; i++)
    {
        for (k = 1; k < l; k++)
        {
            cout << " ";
        }
        l--;
        for (j = n - 1; j < t; j++)
        {

            cout << "*";
        }

        cout << "\n";
        t = t + 2;
        
    }
     r = (n * 2) - 1;
     s = n;
    for(p = 1; p <= n; p++){
        for(m = n; m < s; m++){
            cout << " ";
        }
        s++;
        for(q = 1; q <= r; q++){
            cout << "*";
        }
        cout << "\n";
        r -= 2;
    }

    return 0;
}