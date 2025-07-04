#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, a;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        int rem, count = 0;
        while (a > 0)
        {
            rem = a % 2;
            if(rem == 1){
                count++;
            }
            a = a / 2;
        }
        int j, result = 0;
        for(j = 0; j < count; j++){
            result = result * 2 + 1;
        }
        cout << result;
        cout << "\n";
    }

    return 0;
}