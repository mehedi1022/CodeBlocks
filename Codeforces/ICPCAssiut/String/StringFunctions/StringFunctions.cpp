#include<bits/stdc++.h>
using namespace std;
int main()
{
int n, q, l, r, pos;
char x;
string s, cmd;
cin >> n >> q;
cin >> s;
while (q--)
{
    cin >> cmd;
    if(cmd == "pop_back"){
    s.pop_back();
    }else if (cmd == "push_back")
    {
        cin >> x;
        s.push_back(x);
    }else if (cmd == "front")
    {
        cout << s.front() << endl;
    }else if (cmd == "back")
    {
        cout << s.back() << endl;
    }else if (cmd == "print")
    {
        cin >> pos;
        cout << s[pos - 1] << endl;
    }else if (cmd == "substr")
    {
        cin >> l >> r;
        if(l > r){
            swap(l, r);
        }
        cout << s.substr(l - 1, r - l + 1) << endl;
    }else if (cmd == "sort")
    {
        cin >> l >> r;
        if(l > r){
            swap(l, r);
        }
        sort(s.begin() + (l - 1), s.begin() + r);
    }else if (cmd == "reverse")
    {
        cin >> l >> r;
        if(l > r){
            swap(l, r);
        }   
        reverse(s.begin() + (l - 1), s.begin() + r);
    }
    
    
}


    return 0;
}