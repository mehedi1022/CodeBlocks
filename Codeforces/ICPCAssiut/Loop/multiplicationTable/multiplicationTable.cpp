#include <bits/stdc++.h>
using namespace std;

int main(){

int i, n, mul = 0;
cin >> n;
for(i = 1; i <=12; i++){
    mul = n * i;
    cout <<n << " * " <<i <<" = " << mul << endl;
}

return 0;
}
