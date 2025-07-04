#include <bits/stdc++.h>
using namespace std;
int main(){
 int x, a, b, i, j ,oddSum = 0, temp;
 cin >> x;
 for(i = 0; i < x ; i++){
 cin >> a >> b;
if(a > b){
   temp = a;
   a = b;
   b = temp;
}
 for(j = a + 1; j < b; j++){
    if( j % 2 == 1){
     oddSum = oddSum + j;
    }
    
 }
 cout << oddSum << endl;
 oddSum = 0;
 }   
    return 0;
}