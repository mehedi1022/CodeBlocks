#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, i;
    long factorial = 1;

    cin >> n;
    if(i < 0){
        cout << "No Factorial" << endl;
    }else{
        for(i = 1; i <= n; i++){
           factorial *= i;
        }
        cout << factorial << endl;  
    }
}
