#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (c < b)
        {
            cout << c << " " << b << " " << a << endl;
        }
        else if (c < a)
        {
            cout << b << " " << c << " " << a << endl;
        }
        else
        {
            cout << b << " " << a << " " << c << endl;
        }
    }
    else
    {
        if (c < a)
        {
            cout << c << " " << a << " " << b << endl;
        }
        else if (c < b)
        {
            cout << a << " " << c << " " << b << endl;
        }
        else
        {
            cout << a << " " << b << " " << c << endl;
        }
    }
    return 0;
}