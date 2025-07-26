#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n, a, b;
cin >> n >> a;
b = n % 500;
if(b <= a){
    cout << "Yes" << endl;
}else{
    cout << "No" << endl;
}
    return 0;
}