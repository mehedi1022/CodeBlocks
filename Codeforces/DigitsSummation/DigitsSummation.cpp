#include <bits/stdc++.h>
using namespace std;
int main(){

    long long n, a, rem, rem2, sum;
    cin >> n >> a;
    rem = n % 10;
    rem2 = a % 10;
    sum = rem + rem2;
    cout << sum << endl;

    return 0;
}