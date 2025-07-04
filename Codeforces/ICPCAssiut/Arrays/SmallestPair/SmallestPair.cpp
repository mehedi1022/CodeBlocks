#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n, k, i, j, res, l, smallest;
    cin >> t;
    for (k = 0; k < t; k++)
    {
        cin >> n;
        long long arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        smallest = LLONG_MAX;
        for (i = 0; i < n - 1; i++)
        {
            for (j = 1 + i; j < n; j++)
            {
                    res = arr[i] + arr[j] + j - i;
                    // smallest = min(smallest, res);
                    if(smallest > res ){
                        smallest = res;
                    }
            }
        }
        cout << smallest << endl;
    }
    return 0;
}