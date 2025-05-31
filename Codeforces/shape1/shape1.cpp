#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, i, j;
    cin >> n;
    int t = n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < t; j++)
        {
            cout << "*";
        }
        t--;
        cout << "\n";
    }

    return 0;
}