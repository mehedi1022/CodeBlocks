#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b;
    char s;
    cin >> a >> s >> b;
    if(a > b && s == '>'){
     cout << "Right" << endl;
    }else if( a < b && s == '>'){
        cout << "Wrong" << endl;
    }else if (a < b && s == '<')
    {
        cout << "Right" << endl;
    }else if (a > b && s == '<')
    {
        cout << "Wrong" << endl;
    }else if (a == b && s == '=')
    {
        cout << "Right"<< endl;
    }else if (a != b && s == '=')
    {
        cout << "Wrong" << endl;
    }else if (a == b && s == '<')
    {
        cout << "Wrong" << endl;
    }else if (a == b && s == '>')
    {
        cout << "Wrong" << endl;
    }
    
    
    
    
    
    


    return 0;
}