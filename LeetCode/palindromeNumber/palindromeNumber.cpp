class Solution {
public:
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
};