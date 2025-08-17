#include<bits/stdc++.h>
using namespace std;
int main()
{
long long i, k, g, m, x = 0, y = 0, empty;
cin >> k >> g >> m;

for(i = 1; i <= k; i++){
    if(x == g){
        x = 0;
    }else if (y == 0)
    {
        y = m;
    }else{
    empty = g - x;
    if(empty >= y){
        x += y;
        y = 0;
    }else{
        y -= empty;
        x = g;
    }
    }
    
}
cout << x << " " << y << endl;
    return 0;
}