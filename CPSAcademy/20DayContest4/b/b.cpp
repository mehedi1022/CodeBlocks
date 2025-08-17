#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, k, i;
    cin >> n >> k;

    long long A[100]; 

    
    for (i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    
    for (i = n - k; i < n; i++)
    {
        cout << A[i] << " ";
    }

    
    for (i = 0; i < n - k; i++)
    {
        cout << A[i];
        if (i != n - k - 1)
        {
            cout << " ";
        }
    }

    cout << endl;
    return 0;
}