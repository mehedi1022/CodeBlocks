#include<bits/stdc++.h>
using namespace std;
int reverse(int x){
 long long rem, rev = 0;
        while(x != 0){
            rem = x % 10;
            rev = rev * 10 + rem;
            x = x / 10;
        }
        if( rev > INT_MAX || rev < INT_MIN){
            rev = 0;
        }
        return rev;
}
int main()
{
int x;
cin >> x;
cout << reverse(x);
    return 0;
}