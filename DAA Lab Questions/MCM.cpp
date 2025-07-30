#include <iostream>
#include <vector>
using namespace std;

struct Matrix
{
    int id;
    int n;
    int m;
    Matrix(int id, int m, int n)
    {
        this->id = id;
        this->m = m;
        this->n = n;
    }
};

void solve(vector<int> p, vector<vector<int>> &dp, vector<vector<int>> &k)
{
    for (int t = 1; t < dp[0].size(); t++)
    {
        for (int i = 0; (i + t) < dp[0].size(); i++)
        {
            for (int key = i; key < (i + t); key++)
            {
                int s = dp[i][key] + dp[key + 1][i + t] + p[i] * p[key + 1] * p[i + 1 + t];
                if (dp[i][i + t] > s)
                {
                    dp[i][i + t] = s;
                    k[i][i + t] = key;
                }
            }
        }
    }
}

void sequence(vector<vector<int>> k, int st, int e)
{
    if (st == e)
    {
        cout << "A" + to_string(st + 1);
        return;
    }
    cout << "( ";
    sequence(k, st, k[st][e]);
    cout << " * ";
    sequence(k, k[st][e] + 1, e);
    cout << " )";
}

int main()
{
    vector<Matrix> v = {Matrix(1, 5, 4), Matrix(2, 4, 6), Matrix(3, 6, 2), Matrix(4, 2, 7)};
    vector<int> p;
    p.push_back(v[0].m);
    for (auto i : v)
    {
        p.push_back(i.n);
    }
    vector<vector<int>> dp(v.size(), vector<int>(v.size(), 0));
    for (int i = 0; i < dp[0].size(); i++)
    {
        for (int j = i + 1; j < dp[0].size(); j++)
        {
            dp[i][j] = INT16_MAX;
        }
    }
    vector<vector<int>> k(v.size(), vector<int>(v.size(), 0));
    solve(p, dp, k);
    sequence(k, 0, 3);
}