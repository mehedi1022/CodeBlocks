#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n, i, rev, l;
cin >> n;
l = n;
long long arr[n];
for(i = 0; i < n; i++){
    cin >> arr[i];
}
for(i = 0; i < n; i++){
rev = arr[l - 1];
cout << rev << " ";
l--;

}
    return 0;
}