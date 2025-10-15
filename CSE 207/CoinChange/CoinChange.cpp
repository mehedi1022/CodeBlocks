#include <bits/stdc++.h>
using namespace std;

// Function to count the number of ways to make change
int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount + 1, 0);
    dp[0] = 1; // Base case: 1 way to make 0 amount

    for (int coin : coins) {
        for (int i = coin; i <= amount; i++) {
            dp[i] += dp[i - coin];
        }
    }
    return dp[amount];
}

int main() {
    vector<int> coins = {1, 2, 5};
    int amount = 5;

    cout << "Number of ways to make " << amount << " = "
         << coinChange(coins, amount) << endl;

    return 0;
}
