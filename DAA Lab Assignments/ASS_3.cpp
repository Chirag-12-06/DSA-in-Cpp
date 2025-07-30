#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// 1) Find the length of the Longest Common Subsequence in Input: S1 = “AGGTAB”, S2 = “GXTXAYB”
// void solve(string s1, string s2, vector<vector<int>> &dp, vector<vector<char>> &dir)
// {
//     for (int i = 1; i < dp.size(); i++)
//     {
//         for (int j = 1; j < dp[0].size(); j++)
//         {
//             if (s1[j - 1] == s2[i - 1])
//             {
//                 dp[i][j] = dp[i - 1][j - 1] + 1;
//                 dir[i][j] = 'd';
//             }
//             else if (dp[i - 1][j] > dp[i][j - 1])
//             {
//                 dp[i][j] = dp[i - 1][j];
//                 dir[i][j] = 't';
//             }
//             else
//             {
//                 dp[i][j] = dp[i][j - 1];
//                 dir[i][j] = 's';
//             }
//         }
//     }
// }
// string sequence(string s1, vector<vector<char>> dir)
// {
//     string ans;
//     int i = dir.size() - 1, j = dir[0].size();
//     while (i && j)
//     {
//         if (dir[i][j] == 'd')
//         {
//             ans += s1[j - 1];
//             i--;
//             j--;
//         }
//         else if (dir[i][j] == 't')
//         {
//             i--;
//         }
//         else
//         {
//             j--;
//         }
//     }
//     reverse(ans.begin(), ans.end());
//     return ans;
// }
// int main()
// {
//     string s1 = "AGGTAB";
//     string s2 = "GXTXAYB";
//     vector<vector<int>> dp(s2.size() + 1, vector<int>(s1.size() + 1, 0));
//     vector<vector<char>> dir(s2.size() + 1, vector<char>(s1.size() + 1));
//     solve(s1, s2, dp, dir);
//     string s = sequence(s1, dir);
//     cout << s << endl;
// }

// 2) There are 3 matrices of dimensions 2×1, 1×3, and 3×4, using Matrix Chain Multiplication find the most efficient way to multiply these
// matrices together such that the total number of element multiplications is minimum
// struct Matrix
// {
//     int id;
//     int n;
//     int m;
//     Matrix(int id, int m, int n)
//     {
//         this->id = id;
//         this->m = m;
//         this->n = n;
//     }
// };
// void solve(vector<int> p, vector<vector<int>> &dp, vector<vector<int>> &k)
// {
//     for (int t = 1; t < dp[0].size(); t++)
//     {
//         for (int i = 0; (i + t) < dp[0].size(); i++)
//         {
//             for (int key = i; key < (i + t); key++)
//             {
//                 int s = dp[i][key] + dp[key + 1][i + t] + p[i] * p[key + 1] * p[i + 1 + t];
//                 if (dp[i][i + t] > s)
//                 {
//                     dp[i][i + t] = s;
//                     k[i][i + t] = key;
//                 }
//             }
//         }
//     }
// }
// void sequence(vector<vector<int>> k, int st, int e)
// {
//     if (st == e)
//     {
//         cout << "A" + to_string(st + 1);
//         return;
//     }
//     cout << "( ";
//     sequence(k, st, k[st][e]);
//     cout << " * ";
//     sequence(k, k[st][e] + 1, e);
//     cout << " )";
// }
// int main()
// {
//     vector<Matrix> v = {Matrix(1, 2, 1), Matrix(2, 1, 3), Matrix(3, 3, 4)};
//     vector<int> p;
//     p.push_back(v[0].m);
//     for (auto i : v)
//     {
//         p.push_back(i.n);
//     }
//     vector<vector<int>> dp(v.size(), vector<int>(v.size(), 0));
//     for (int i = 0; i < dp[0].size(); i++)
//     {
//         for (int j = i + 1; j < dp[0].size(); j++)
//         {
//             dp[i][j] = INT16_MAX;
//         }
//     }
//     vector<vector<int>> k(v.size(), vector<int>(v.size(), 0));
//     solve(p, dp, k);
//     sequence(k, 0, v.size()-1);
// }

// 3) Given N = 3 items where each item has some weight and profit associated with it profit[] = {1, 2, 3}, weight[] = {4, 5, 1}and also given
// a bag with capacity W=4. Put the items into the bag such that the sum of profits associated with them is the maximum
// possible with the constraint either put an item completely into the bag or cannot put it at all.
// struct Items
// {
//     int id;
//     int Weight;
//     int Profit;
//     Items(int id, int Weight, int Profit) : id(id), Weight(Weight), Profit(Profit) {};
// };
// void solve(vector<Items> &it, vector<vector<int>> &dp)
// {
//     for (int i = 1; i < dp.size(); i++)
//     {
//         for (int j = 1; j < dp[0].size(); j++)
//         {
//             if (it[i - 1].Weight > j)
//             {
//                 dp[i][j] = dp[i - 1][j];
//             }
//             else
//             {
//                 dp[i][j] = max((dp[i - 1][j]), (dp[i - 1][j - it[i - 1].Weight] + it[i - 1].Profit));
//             }
//         }
//     }
// }
// void print_items(vector<vector<int>> &dp, int row, int col, int Knapsack_Weight, vector<Items> &v)
// {
//     if (!row)
//     {
//         return;
//     }
//     else if (dp[row][col] == dp[row - 1][col])
//     {
//         print_items(dp, row - 1, col, Knapsack_Weight, v);
//     }
//     else
//     {
//         print_items(dp, row - 1, Knapsack_Weight - v[row - 1].Weight, Knapsack_Weight, v);
//         cout << "Item: " << row << endl;
//     }
// }
// int main()
// {
//     vector<Items> v = {Items(1, 4, 1), Items(2, 5, 2), Items(3, 1, 3)};
//     int Knapsack_Weight = 5;
//     vector<vector<int>> dp(v.size() + 1, vector<int>((Knapsack_Weight + 1), 0));
//     solve(v, dp);
//     print_items(dp, dp.size() - 1, dp[0].size() - 1, Knapsack_Weight, v);
// }

// 4) Given a binary matrix mat of size n * m, the task is to find out the maximum length of a side of a square sub-matrix with all 1s.
// Input:  mat = [ [0, 1, 1, 0, 1], [1, 1, 0, 1, 0], [0, 1, 1, 1, 0], [1, 1, 1, 1, 0], [1, 1, 1, 1, 1], [0, 0, 0, 0, 0] ]
// int Max_len(vector<vector<int>> &mat)
// {
//     int ans = 0;
//     for (int i = 1; i < mat.size(); i++)
//     {
//         for (int j = 1; j < mat[i].size(); j++)
//         {
//             if (mat[i][j] == 1)
//             {
//                 mat[i][j] = min(mat[i - 1][j - 1], min(mat[i - 1][j], mat[i][j - 1])) + 1;
//                 ans = max(mat[i][j], ans);
//             }
//         }
//     }
//     return ans;
// }
// int main()
// {
//     vector<vector<int>> mat = {
//         {0, 1, 1, 0, 1},
//         {1, 1, 0, 1, 0},
//         {0, 1, 1, 1, 0},
//         {1, 1, 1, 1, 0},
//         {1, 1, 1, 1, 1},
//         {0, 0, 0, 0, 0}};
//     cout << Max_len(mat);
// }

// Additional Questions
// 1. Given an array arr[] of length n and an integer target, the task is to find the subsets with a sum equal to target.
// Input: arr[] = {2, 3, 7, 8, 10}, target = 10
// Output: All the possible subsets are [2, 8], [3, 7], [10]
// void Subset(vector<int> &W, int target, int position, vector<int> &ans) {
//     if (target == 0) {
//         cout << "Solution: {";
//         for (int k = 0; k < ans.size(); k++) {
//             cout << ans[k];
//             if (k != ans.size() - 1) cout << ",";
//         }
//         cout << "}\n";
//         return;
//     }
//     for (int i = position; i < W.size(); i++) {
//         if (W[i] <= target) {
//             ans.push_back(W[i]);
//             Subset(W, target - W[i], i + 1, ans);
//             ans.pop_back();  
//         }
//     }
// }
// int main()
// {
//     vector<int> ans;
//     vector<int> W = {2, 3, 7, 8, 10};
//     int m = 10;
//     sort(W.begin(), W.end());
//     Subset(W, m, 0, ans);
// }

// 2. Given an array arr[] of size n, find the Longest Increasing Subsequence (LIS) in which the elements of the subsequence are sorted.
// Input: arr[] = [3, 10, 2, 1, 20]
// Output: The longest increasing subsequence is [3, 10, 20]  .
// vector<int> LIS(vector<int> &arr)
// {
//     vector<int> counts(arr.size(), 1);
//     vector<int> index(arr.size(), 0);
//     for (int i = 1; i < arr.size(); i++)
//     {
//         index[i] = i;
//         int k = i - 1;
//         while (k >= 0)
//         {
//             if (arr[k] < arr[i] && counts[k] >= counts[i])
//             {
//                 counts[i] = counts[k] + 1;
//                 index[i] = k;
//             }
//             k--;
//         }
//     }
//     vector<int> ans;
//     int idx, c = 0;
//     for (int i = 0; i < counts.size(); i++)
//     {
//         if (c < counts[i])
//         {
//             c = counts[i];
//             idx = i;
//         }
//     }
//     ans.push_back(arr[idx]);
//     int k = idx;
//     while (counts[k] != 1)
//     {
//         ans.insert(ans.begin(), arr[index[k]]);
//         k = index[k];
//     }
//     return ans;
// }
// int main()
// {
//     vector<int> arr = {3, 10, 2, 1, 20};
//     vector<int> ans;
//     ans = LIS(arr);
//     cout << "{";
//     for (int i = 0; i < ans.size() - 1; i++)
//     {
//         cout << ans[i] << ",";
//     }
//     cout << ans.back() << "}";
// }

// 3. Stickler the thief wants to loot money from a society having n houses in a single line. He follows a certain rule when looting the houses.
// According to the rule, he will never loot two consecutive houses. At the same time, he wants to maximize the amount he loots.
// He asks for help to find the maximum money he can get if he strictly follows the rule. ith house has hval[i] amount of money present in it.
// Input: hval[] = {5, 5, 10, 100, 10, 5}
// Output: Selected: {5, 100, 5}
// vector<int> Loot_Max(vector<int> &arr)
// {
//     vector<int> loot(arr.size());
//     vector<int> idx(arr.size());
//     loot[0] = arr[0];
//     idx[0] = -1;
//     loot[1] = arr[1];
//     idx[1] = -1;
//     loot[2] = arr[1] + arr[0];
//     idx[2] = 0;
//     for (int i = 3; i < arr.size(); i++)
//     {
//         if (loot[i - 2] > loot[i - 3])
//         {
//             loot[i] = loot[i - 2] + arr[i];
//             idx[i] = i - 2;
//         }
//         else
//         {
//             loot[i] = loot[i - 3] + arr[i];
//             idx[i] = i - 3;
//         }
//     }
//     vector<int> ans;
//     int k = loot.size() - 1;
//     if (loot[k] > loot[k - 1])
//     {
//         ans.push_back(arr[k]);
//     }
//     else
//     {
//         ans.push_back(arr[k - 1]);
//         k--;
//     }
//     while (idx[k] != -1)
//     {
//         ans.insert(ans.begin(), arr[idx[k]]);
//         k = idx[k];
//     }
//     return ans;
// }
// int main()
// {
//     vector<int> hval = {5, 5, 10, 100, 10, 5};
//     vector<int> ans;
//     ans = Loot_Max(hval);
//     cout << "Selected: {";
//     for (int i = 0; i < ans.size() - 1; i++)
//     {
//         cout << ans[i] << ",";
//     }
//     cout << ans.back() << "}";
// }

// 4. Given a fence with n posts and k colors,find out the number of ways of painting fence so that not more than two consecutive
// posts having same color.
// Input: n = 3, k = 2
// Output: 6
// int Ways(int fences, int colours)
// {
//     if (colours == 0)
//     {
//         return 0;
//     }
//     if (colours == 1)
//     {
//         if (fences == 1)
//         {
//             return 1;
//         }
//         return 0;
//     }
//     if (fences == 1)
//     {
//         return colours;
//     }
//     if (fences == 2)
//     {
//         return colours * colours;
//     }
//     int prev2 = colours;
//     int prev1 = colours * colours;
//     for (int i = 3; i <= fences; i++)
//     {
//         int curr = (prev1 + prev2) * (colours - 1);
//         prev2 = prev1;
//         prev1 = curr;
//     }
//     return prev1;
// }
// int main()
// {
//     int fences = 3;
//     int colours = 2;
//     cout << Ways(fences, colours);
// }

// Given an array arr[] containing n positive integers, a subsequence of nums is called bitonic if it is first strictly increasing, 
// then strictly decreasing. Find the longest bitonic subsequence. 
// Input: arr[]= [12, 11, 40, 5, 3, 1] 
// Output : The Longest Bitonic Subsequence is {12, 40, 5, 3, 1}.  

vector<int> Longest_Bitonic_Subsequence(vector<int> &arr){
    
}

int main(){
    vector<int> arr={12, 11, 40, 5, 3, 1};
    vector<int> ans;
    ans = Longest_Bitonic_Subsequence(arr);
    cout << "Selected: {";
    for (int i = 0; i < ans.size() - 1; i++)
    {
        cout << ans[i] << ",";
    }
    cout << ans.back() << "}";  
}