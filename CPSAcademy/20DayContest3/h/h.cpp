#include<bits/stdc++.h>
using namespace std;
int main()
{
long long t, k, i, n, p;
cin >> t;
for(k = 0; k < t; k++){
cin >> n;
long long count = 0, m = n, lastD;
while (m > 0)
{
    lastD = m % 10;
    m /= 10;
    if(lastD > 0){
        count++;
    }
}
cout << count << endl;
p = 1;
while (n > 0)
{
    lastD = n % 10;
    n /= 10;

    if(lastD != 0){
        cout << lastD * p << " ";
    }
    p *= 10;
}
cout << endl;

}
    return 0;
}


// has problem not solved
