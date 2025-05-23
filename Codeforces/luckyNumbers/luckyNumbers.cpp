#include <bits/stdc++.h>
using namespace std;

bool isLucky(int n){
    int dig;
    while (n > 0)
    {
        dig = n % 10;
        if(dig != 4 && dig != 7){
            return false;
        }
        n = n / 10;
    }
    return true;
    
}

int main(){
    int a, b, i;
    bool found = false;
    cin >> a >> b;
    for(i =a; i <= b; i++){
     if(isLucky(i) == true){
      cout << i << " ";
      found = true;
     }
    }
    if(found == false){
        cout << "-1" << endl;
    }

    return 0;
}