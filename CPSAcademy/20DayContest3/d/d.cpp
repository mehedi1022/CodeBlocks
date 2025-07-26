#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n, s, i, x, sum = 0;
cin >> n >> x;
for(i = 0; i < n; i++){
    cin >> s;
    if( s <= x){
        sum += s;
    }
}
cout << sum << endl;
    return 0;
}