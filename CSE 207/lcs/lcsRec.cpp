#include <bits/stdc++.h>
using namespace std;

int lcsRecursive(string X, string Y, int m, int n) {
    if (m == 0 || n == 0) return 0;

    if (X[m - 1] == Y[n - 1])
        return 1 + lcsRecursive(X, Y, m - 1, n - 1);
    else
        return max(lcsRecursive(X, Y, m - 1, n),
                   lcsRecursive(X, Y, m, n - 1));
}

int main() {
    string X = "ABAABA";
    string Y = "BABBAB";

    cout << "LCS length (Naive Recursion): "
         << lcsRecursive(X, Y, X.size(), Y.size()) << endl;
    return 0;
}
