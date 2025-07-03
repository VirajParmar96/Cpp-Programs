/*
  Program: 0/1 Knapsack Problem (Dynamic Programming)
  Level  : Advanced
  Author : Viraj Parmar
  Description:
    A program to solve the 0/1 Knapsack problem using dynamic programming.
*/

#include <iostream>
#include <vector>
using namespace std;

int knapsack(int W, const vector<int>& wt, const vector<int>& val, int n) {
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

    for (int i = 0; i <= n; ++i) {
        for (int w = 0; w <= W; ++w) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (wt[i - 1] <= w)
                dp[i][w] = max(val[i - 1] + dp[i - 1][w - wt[i - 1]], dp[i - 1][w]);
            else
                dp[i][w] = dp[i - 1][w];
        }
    }

    return dp[n][W];
}

int main() {
    int n = 4;
    vector<int> val = {60, 100, 120, 50};
    vector<int> wt  = {10, 20, 30, 5};
    int W = 50;

    int maxProfit = knapsack(W, wt, val, n);
    cout << "Maximum Profit: " << maxProfit << endl;

    return 0;
}





// Output:
// Maximum Profit: 220
