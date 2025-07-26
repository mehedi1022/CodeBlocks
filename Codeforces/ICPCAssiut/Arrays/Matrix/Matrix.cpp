#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i, j, n, sum1 = 0, sum2 = 0, res;
    cin >> n;
    long long arr[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
            {
                // cout << arr[i][j] << " ";
                sum1 += arr[i][j];
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i; j++)
        {
            if (j == n - i - 1)
            {
                // cout << arr[i][j] << " ";
                sum2 += arr[i][j];
            }
        }
    }
    res = abs(sum1 - sum2);
    cout << res << endl;

    return 0;
}