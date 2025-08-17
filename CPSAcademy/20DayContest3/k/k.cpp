#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n, k, m, s, i, a, remaining;
cin >> n >> k >> m;
s = 0;
for( i = 1; i <= n -1 ; i++){
    cin >> a;
    s += a;
}
remaining = n * m -s;
if(remaining > k){
    cout << "-1" << endl;
}else{
    if(remaining < 0){
        cout << "0" << endl;
    }else{
        cout << remaining << endl;
    }
}
    return 0;
}