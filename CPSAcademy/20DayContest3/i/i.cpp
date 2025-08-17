#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t, i , a, b, tc = 1, sum;
cin >> t;
for( i = 0; i < t; i++){
cin >> a >> b;
sum = a + b;
cout << "Case "<< tc <<": "<< sum << endl;
tc++;
}
    return 0;
}