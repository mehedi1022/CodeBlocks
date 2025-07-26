#include<bits/stdc++.h>
using namespace std;
int main()
{
long a, b, i;
string s;
cin >> a >> b;
cin >> s;
if(a + b + 1 != s.length()){
    cout << "No" << endl;
    return 0;
}
if(s[a] != '-'){
    cout << "No" << endl;
    return 0;
}

bool valid = true;
for(i = 0; i < s.length(); i++){
if(i == a){
    continue;
}
if(!isdigit(s[i])){
    valid = false;
    break;
}
}
if(valid){
    cout << "Yes" << endl;
}else{
    cout << "No" << endl;
}
    return 0;
}