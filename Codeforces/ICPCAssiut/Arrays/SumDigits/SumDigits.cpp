#include<bits/stdc++.h>
using namespace std;
int main()
{
   long long n, i, sum = 0;
   cin >> n;
   string dig;
   cin >> dig;
   
   for(i = 0; i < n; i++){
    sum = sum + (dig[i] - '0');
   }
   cout << sum << endl;
    return 0;
}