#include<bits/stdc++.h>
using namespace std;
int main()
{
long long a, b;
cin >> a >> b;
if(a < b){
if( b - a <= 2){
    cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}else{
    if(a - b <= 3){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}
    return 0;
}