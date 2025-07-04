#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    int i;
    if (n <= 1)
    {
        return false;
    }
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n, i;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        if (isPrime(i) == true)
        {
            cout << i << " ";
        }
    }
}