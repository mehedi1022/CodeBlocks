#include <bits/stdc++.h>
using namespace std;

// 0/1 Knapsack using DP (Bottom-Up)
int knapsack01(int W, vector<int> wt, vector<int> val, int n) {
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= W; w++) {
            if (wt[i - 1] <= w)
                dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }
    return dp[n][W];
}

int main() {
    int n = 4, W = 8;
    vector<int> val = {2, 4, 7, 10};
    vector<int> wt  = {1, 3, 5, 7};

    cout << "Maximum Profit (0/1 Knapsack) = " 
         << knapsack01(W, wt, val, n) << endl;

    return 0;
}
