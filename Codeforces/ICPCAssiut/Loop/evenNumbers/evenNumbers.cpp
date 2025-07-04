#include <bits/stdc++.h>
using namespace std;
int main(){

int i, n;
cin >> n;
bool foundEven = false;

for(i = 2; i <= n; i++){

    if(i % 2 == 0){
        cout << i << "\n";
        foundEven = true;
    }

}
if(foundEven == false){
    cout << -1 << "\n";
}

return 0;
}
