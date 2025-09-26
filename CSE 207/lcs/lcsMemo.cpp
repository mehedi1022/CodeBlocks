//Top Down
#include <bits/stdc++.h>
using namespace std;

int dp[100][100]; // memo table

int lcsMemo(string X, string Y, int m, int n) {
    if (m == 0 || n == 0) return 0;

    if (dp[m][n] != -1) return dp[m][n];

    if (X[m - 1] == Y[n - 1])
        return dp[m][n] = 1 + lcsMemo(X, Y, m - 1, n - 1);
    else
        return dp[m][n] = max(lcsMemo(X, Y, m - 1, n),
                              lcsMemo(X, Y, m, n - 1));
}

int main() {
    string X = "ABAABA";
    string Y = "BABBAB";

    memset(dp, -1, sizeof(dp));

    cout << "LCS length (Memoization): "
         << lcsMemo(X, Y, X.size(), Y.size()) << endl;
    return 0;
}
