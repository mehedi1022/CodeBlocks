#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x, i, rem;
    cin >> x;
    for (i = 0; i < x; i++)
    {
        cin >> n ;
        if(n == 0){
            cout << n;
        }
        while (n != 0)
        {
            rem = n % 10;
            n = n / 10;
            cout << rem << " ";
        }
        
        cout << "\n";
    }
    return 0;
}