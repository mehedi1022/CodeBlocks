#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, m, i, j, x;
    cin >> n >> m;
    long long arr[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    cin >> x;
    bool take = false;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (arr[i][j] == x)
            {
                take = true;
                break;
            }
           
        }
    }
    if (take == true)
    {
        cout << "will not take number" << endl;
    }
    else
    {
        cout << "will take number" << endl;
    }
    return 0;
}