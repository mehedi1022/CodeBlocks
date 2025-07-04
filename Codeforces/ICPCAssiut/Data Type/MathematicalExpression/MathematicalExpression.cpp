#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    if ((a + b) == c && s == '+')
    {
        cout << "Yes" << endl;
    }
    else if ((a + b) != c && s == '+')
    {
        cout << a + b << endl;
    }
    else if ((a * b) == c && s == '*')
    {
        cout << "Yes" << endl;
    }
    else if ((a * b) != c && s == '*')
    {
        cout << a * b << endl;
    }
    else if ((a - b) == c && s == '-')
    {
        cout << "Yes" << endl;
    }
    else if ((a - b) != c && s == '-')
    {
        cout << a - b << endl;
    }

    return 0;
}