#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t, i, l, n, a;
    cin >> t;
    for (l = 0; l < t; l++)
    {
       
        cin >> n;

        long long countOdd = 0;
        for (int i = 0; i < n; i++)
        {
          
            cin >> a;
            if (a % 2 == 1)
            { 
                countOdd++;
            }
        }

        cout << countOdd << endl;
    }
    return 0;
}