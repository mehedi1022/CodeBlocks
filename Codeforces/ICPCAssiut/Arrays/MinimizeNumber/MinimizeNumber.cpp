#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n, i, count = 0, found = 0;
    cin >> n;
    long long arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (found == 0)
    {
        for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 1)
        {
            found = 1;
        }
        arr[i] /= 2;
       
    }
    // for(i = 0; i < n; i++){
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
     count++;
    }
    
    cout << count-1 << endl;

    return 0;
}