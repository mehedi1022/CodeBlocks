#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b, c, i, t, rem, sum = 0, j, lastSum = 0;
    cin >> n >> b >> c;
    for (i = 1; i <= n; i++)
    {
        //  cout << i << " ";
        t = i;
        while (i != 0)
        {
            rem = i % 10;
            sum = sum + rem;
            i = i / 10;
        }
        i = t;
        for (j = b; j <= c; j++)
        {
            if (j == sum)
            {
                lastSum += i;
               
            }
             
            
        }
       
        

        sum = 0;
    }
 cout << lastSum << endl;
    return 0;
}