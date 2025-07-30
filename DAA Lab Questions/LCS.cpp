#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(string s1, string s2, vector<vector<int>> &dp, vector<vector<char>> &dir)
{
    for (int i = 1; i < dp.size(); i++)
    {
        for (int j = 1; j < dp[0].size(); j++)
        {
            if (s1[j - 1] == s2[i - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                dir[i][j] = 'd';
            }
            else if (dp[i - 1][j] > dp[i][j - 1])
            {
                dp[i][j] = dp[i - 1][j];
                dir[i][j] = 't';
            }
            else
            {
                dp[i][j] = dp[i][j - 1];
                dir[i][j] = 's';
            }
        }
    }
}

string sequence(string s1, vector<vector<char>> dir)
{
    string ans;
    int i = dir.size()-1 , j = dir[0].size()-1;
    while (i && j)
    {
        if (dir[i][j] == 'd')
        {
            ans += s1[j - 1];
            i--;
            j--;
        }
        else if (dir[i][j] == 't')
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    string s1 = "ABCBDACCBA";
    string s2 = "BDCABCCA";
    vector<vector<int>> dp(s2.size() + 1, vector<int>(s1.size() + 1, 0));
    vector<vector<char>> dir(s2.size() + 1, vector<char>(s1.size() + 1));
    solve(s1, s2, dp, dir);
    string s = sequence(s1, dir);
    cout << s << endl;
}