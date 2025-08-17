#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, q, l, r, i, sum, j;
    cin >> n >> q;
    long long arr[n], pf[n];
    for (i = 1; i <= n; i++)
    {
        cin >> arr[i];
        pf[i] = pf[i - 1] + arr[i];
    }
    for (i = 1; i <= q; i++)
    {
        cin >> l >> r;
        sum = pf[r] - pf[l - 1];

        cout << sum << endl;
    }
    
    return 0;
}