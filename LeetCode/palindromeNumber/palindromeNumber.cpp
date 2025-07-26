#include <bits/stdc++.h>
using namespace std;
    bool isPalindrome(int x) {
        int rem, org;
        long long rev = 0;
        if( x < 0){
            return false;
        }else{
         org = x;
        while(x != 0){
            rem = x % 10;
            rev = rev * 10 + rem;
            x = x / 10;
        }
        if(org == rev){
            return true;
        }else{
            return false;
        }
        }
        
    }
    int main(){
    int x;
    cin >> x;
    cout << isPalindrome(x);
        return 0;
    }
