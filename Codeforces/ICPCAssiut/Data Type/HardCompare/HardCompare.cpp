#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    // a^b > c^d  →  log(a^b) > log(c^d)  →  b*log(a) > d*log(c)
    //logl for long double

    
    long double f1 = b * logl(a);
    long double f2 = d * logl(c);

    if (f1 > f2)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}