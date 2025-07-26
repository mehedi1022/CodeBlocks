#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, i, j, k, l, n, count = 0;
    cin >> t;
    for (i = 0; i < t; i++)
    {

        cin >> n;
        long long arr[n];
        for (j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        for (j = 0; j < n; j++)
        {
            for (k = j; k < n; k++)
            {
                bool f = true;
                for (l = j; l <= k; l++)
                {
                    // arr[l] <= arr[l + 1];
                    //    cout << arr[l] << " ";
                    if (arr[l] >= arr[l + 1] && arr[l] != arr[k])
                    {
                        f = false;
                        break;
                    }
                }
                if (f == true)
                {
                    count++;
                }
                //    count++;
                // cout << endl;
            }
        }

        cout << count << endl;
        count = 0;
        // cout << endl;
    }

    return 0;
}