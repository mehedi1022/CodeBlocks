#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, j, k, l, m;
    l = 3;
    m = 1;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for(k = m; k <= l; k++){
        cout << k << " ";
        }
        l += 4;
        m += 4;
        for (j = n-1; j < n; j++)
        {
            cout << "PUM";
        }
        cout << "\n";
    }
    return 0;
}