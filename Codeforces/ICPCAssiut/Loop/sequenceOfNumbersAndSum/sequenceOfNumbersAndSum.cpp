#include <bits/stdc++.h>
using namespace std;
int main()
{
   int x, a, b, i, j, temp, sum = 0;

   while (cin >> a >> b)
   {
      if (a <= 0 || b <= 0)
      {
         break;
      }
      else
      {
         if (a > b)
         {
            temp = a;
            a = b;
            b = temp;
         }
         for (j = a; j <= b; j++)
         {
            sum += j;
            cout << j << " ";
         }
         cout << "sum =" << sum << endl;
         sum = 0;
      }
   }

   return 0;
}