#include <bits/stdc++.h>
using namespace std;

int main(){
int i, n;

cin >> n;
int arr[n];
for(i = 0; i < n; i++){
cin >> arr[i];
}
int countEven=0, countOdd=0, countPos=0, countNeg=0;
for(i = 0; i < n; i++){
if(arr[i] % 2 == 0){
    countEven++;

}else{
countOdd++;

}
if(arr[i] < 0){
    countNeg++;

}else if(arr[i] > 0){
countPos++;

}
}



cout << "Even: " << countEven << "\n";
cout << "Odd: " << countOdd << "\n";
cout << "Positive: " << countPos << "\n";
cout << "Negative: " << countNeg << "\n";

return 0;
}
