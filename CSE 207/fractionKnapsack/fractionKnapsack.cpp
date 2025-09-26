#include <bits/stdc++.h>
using namespace std;

struct Item {
    int value, weight;
    Item(int v, int w) {
        value = v;
        weight = w;
    }
};

// Comparator to sort by value/weight ratio
bool cmp(Item a, Item b) {
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;  // sort in descending order
}

double fractionalKnapsack(int W, vector<Item>& items, int n) {
    // Sort items by value/weight ratio
    sort(items.begin(), items.end(), cmp);

    double totalValue = 0.0;

    for (int i = 0; i < n; i++) {
        if (items[i].weight <= W) {
            // take full item
            W -= items[i].weight;
            totalValue += items[i].value;
        } else {
            // take fraction
            totalValue += items[i].value * ((double)W / items[i].weight);
            break;
        }
    }
    return totalValue;
}

int main() {
    int n, W;
    cout << "Enter number of items: ";
    cin >> n;

    cout << "Enter maximum capacity of knapsack: ";
    cin >> W;

    vector<Item> items;
    cout << "Enter value and weight of each item:\n";
    for (int i = 0; i < n; i++) {
        int v, w;
        cin >> v >> w;
        items.push_back(Item(v, w));
    }

    cout << "Maximum Profit (Fractional Knapsack) = "
         << fractionalKnapsack(W, items, n) << endl;

    return 0;
}
