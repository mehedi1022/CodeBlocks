#include<bits/stdc++.h>
using namespace std;
int main()
{

    double r, pi = acos(-1), ar, cr;
    cin >> r;
    ar = pi * r * r;
    cr = 2 * pi * r;
    cout << fixed << setprecision(6) << ar << " " << cr << endl;
    return 0;
}