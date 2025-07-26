#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a, b, c;
long long  abc, bca, cab;
cin >> a >> b >> c;
abc = (a - '0' ) * 100 + (b - '0') * 10 + (c - '0') * 1;
bca = (b - '0' ) * 100 + (c - '0') * 10 + (a - '0') * 1;
cab = (c - '0' ) * 100 + (a - '0') * 10 + (b - '0') * 1;
cout << abc + bca + cab << endl;
    return 0;
}