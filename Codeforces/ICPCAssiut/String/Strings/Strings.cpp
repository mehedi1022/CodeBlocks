#include<bits/stdc++.h>
using namespace std;
int main()
{
string a, b, c;
char t;
long long l1, l2;
cin >> a;
cin >> b;
l1 = a.size();
l2 = b.size();
c = a + b;
t = a[0];
a[0] = b[0];
b[0] = t;
cout << l1 << " " << l2 << endl;
cout << c << endl;
cout << a << " " << b << endl; 
    return 0;
}