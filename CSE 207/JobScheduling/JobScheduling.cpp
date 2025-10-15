#include <bits/stdc++.h>
using namespace std;

struct Job {
    int id;      // Job ID
    int profit;  // Profit if completed
    int deadline; // Deadline
};

// Comparison function for sorting jobs by profit (descending)
bool compare(Job a, Job b) {
    return a.profit > b.profit;
}

void jobScheduling(vector<Job>& jobs) {
    int n = jobs.size();

    // Sort jobs by decreasing profit
    sort(jobs.begin(), jobs.end(), compare);

    // Find maximum deadline
    int maxDeadline = 0;
    for (auto& job : jobs)
        maxDeadline = max(maxDeadline, job.deadline);

    // Create a time slot array
    vector<int> slot(maxDeadline + 1, -1); 

    int totalProfit = 0;
    int jobsDone = 0;

    // Assign jobs
    for (int i = 0; i < n; i++) {
        // Find a free slot before deadline
        for (int j = jobs[i].deadline; j > 0; j--) {
            if (slot[j] == -1) {
                slot[j] = jobs[i].id;
                totalProfit += jobs[i].profit;
                jobsDone++;
                break;
            }
        }
    }

    cout << "Jobs scheduled: ";
    for (int i = 1; i <= maxDeadline; i++) {
        if (slot[i] != -1)
            cout << "J" << slot[i] << " ";
    }
    cout << "\nTotal Profit = " << totalProfit << endl;
}

int main() {
    vector<Job> jobs = {
        {1, 100, 2},
        {2, 19, 1},
        {3, 27, 2},
        {4, 25, 1},
        {5, 15, 3}
    };

    jobScheduling(jobs);

    return 0;
}
