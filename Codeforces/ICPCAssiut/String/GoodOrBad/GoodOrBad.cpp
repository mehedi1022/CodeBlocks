#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t, i, j;
cin >> t;
for(i = 0; i < t; i++){
    string s;
    cin >> s;
    long long g = 0;
    for(j = 0; j < s.size() - 2; j++){
     if((s[j] == '0' && s[j + 1] == '1' && s[j + 2] == '0') || (s[j] == '1' && s[j + 1] == '0' && s[j + 2] == '1')){
     g = 1;
     break;
     }
     }
    if(g == 1){
        cout << "Good" <<endl;
    }else{
        cout << "Bad" << endl;
    } 
    }
    

    return 0;
}