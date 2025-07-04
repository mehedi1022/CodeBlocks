#include <bits/stdc++.h>
using namespace std;

int main(){
int n, i , count = 0;
cin >> n;

if(n <= 1){
cout << "NO" << endl;
}else{
for( i = 1; i <=n; i++){
    if(n % i == 0){
        count++;
    }

}
if(count > 2){
    cout << "NO" << endl;
}else{
cout << "YES" << endl;
}
}
return 0;
}
