#include <iostream>
#include <vector>
using namespace std;

struct Items
{
    int id;
    int Weight;
    int Profit;
    Items(int id, int Weight, int Profit) : id(id), Weight(Weight), Profit(Profit) {};
};

void solve(vector<Items> &it, vector<vector<int>> &dp)
{
    for (int i = 1; i < dp.size(); i++)
    {
        for (int j = 1; j < dp[0].size(); j++)
        {
            if (it[i - 1].Weight > j)
            {
                dp[i][j] = dp[i - 1][j];
            }
            else
            {
                dp[i][j] = max((dp[i - 1][j]), (dp[i - 1][j - it[i - 1].Weight] + it[i - 1].Profit));
            }
        }
    }
}

void print_items(vector<vector<int>> &dp, int row, int col, int Knapsack_Weight, vector<Items> &v)
{
    if (!row)
    {
        return;
    }
    else if (dp[row][col] == dp[row - 1][col])
    {
        print_items(dp, row - 1, col, Knapsack_Weight, v);
    }
    else
    {
        print_items(dp, row - 1, Knapsack_Weight - v[row - 1].Weight, Knapsack_Weight, v);
        cout << "Item: " << row << endl;
    }
}

int main()
{
    // vector<Items> v = {Items(1, 2, 3), Items(2,3, 4), Items(3,4,5), Items(4, 5, 8),Items(5, 9,10)};
    vector<Items> v = {Items(1, 2, 3), Items(2, 3, 4), Items(3, 4, 5), Items(4, 5, 6)};
    int Knapsack_Weight = 5;

    vector<vector<int>> dp(v.size() + 1, vector<int>((Knapsack_Weight + 1), 0));

    solve(v, dp);
    print_items(dp, dp.size() - 1, dp[0].size() - 1, Knapsack_Weight, v);
}