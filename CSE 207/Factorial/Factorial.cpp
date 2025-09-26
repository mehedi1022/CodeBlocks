#include <bits/stdc++.h>
using namespace std;

// Factorial using Dynamic Programming (Tabulation)
long long factorial(int n) {
    vector<long long> dp(n + 1, 1);
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] * i;
    }
    return dp[n];
}

int main() {
    int n;
    cout << "Enter n for Factorial: ";
    cin >> n;
    cout << n << "! = " << factorial(n) << endl;
    return 0;
}
