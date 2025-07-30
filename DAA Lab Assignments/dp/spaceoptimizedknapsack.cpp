//Space optimized 0/1 Knapsack
#include <bits/stdc++.h>
using namespace std;

// Function to solve the 0/1 Knapsack problem using dynamic programming
int knapsack(vector<int>& wt, vector<int>& val, int n, int W) {
    // Initialize a vector 'prev' to represent the previous row of the DP table
    vector<int> prev(W + 1, 0);

    // Base condition: Fill in 'prev' for the weight of the first item
    for (int i = wt[0]; i <= W; i++) {
        prev[i] = val[0];
    }

    // Fill in the DP table using a bottom-up approach
    for (int i = 1; i < n; i++) {
        for (int w = W; w >= 0; w--) {
            // Calculate the maximum value by either excluding the current item or including it
            int notTaken = prev[w];
            int taken = INT_MIN;

            // Check if the current item can be included without exceeding the knapsack's capacity
            if (wt[i] <= w) {
                taken = val[i] + prev[w - wt[i]];
            }

            // Update 'prev' for the current capacity
            prev[w] = max(notTaken, taken);
        }
    }

    // The final result is in the last cell of the 'prev' vector
    return prev[W];
}

int main() {
    vector<int> wt = {1, 2, 4, 5};
    vector<int> val = {5, 4, 8, 6};
    //vector<int> wt = {3, 8, 6};
    //vector<int> val = {7, 8, 4};
    //int W = 10;
    int W = 5;
    int n = wt.size();
    cout << "The Maximum value of items the thief can steal is " << knapsack(wt, val, n, W);
    return 0;
}
