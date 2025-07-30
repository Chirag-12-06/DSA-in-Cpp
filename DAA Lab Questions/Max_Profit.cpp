#include <iostream>
using namespace std;

// BRUTE FORCE (Time Complexcity n*n)
// int Max_Profit(int A[], int n)
// {
//     int diff = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i + 1; j < n; j++)
//         {
//             int curr_diff = A[j] - A[i];
//             if (curr_diff > diff)
//             {
//                 diff = curr_diff;
//             }
//         }
//     }
//     return diff;
// }
// int main()
// {
//     int A[] = {1, 5, 3, 2};
//     int B[] = {9, 4, 2, 1};
//     cout << Max_Profit(A, (sizeof(A) / sizeof(A[0]))) << " " << Max_Profit(B, (sizeof(B) / sizeof(B[0])));
// }

// Divide-and-Conquer: Time: O(n*log(n)), Space: O(log(n))
int calc(int A[], int s, int mid, int e)
{
    int left = INT8_MAX;
    for (int i = s; i <= mid; i++)
    {
        if (A[i] < left)
        {
            left = A[i];
        }
    }
    int right = INT8_MIN;
    for (int i = mid + 1; i <= e; i++)
    {
        if (A[i] > right)
        {
            right = A[i];
        }
    }
    int diff = right - left;
    return max(diff, 0);
}
int Max_Profit(int A[], int s, int e)
{
    if (s == e)
    {
        return 0;
    }
    int mid = (s + e) / 2;
    int left = Max_Profit(A, s, mid);
    int right = Max_Profit(A, mid + 1, e);
    int cross = calc(A, s, mid, e);
    int ans = max(left, right);
    return max(ans, cross);
}
int main()
{
    int A[] = {1, 5, 3, 2};
    int B[] = {9, 4, 2, 1};
    cout << Max_Profit(A, 0, (sizeof(A) / sizeof(A[0])) - 1) << " " << Max_Profit(B, 0, (sizeof(B) / sizeof(B[0])) - 1);
}

// Optimized Divide-and-Conquer: Time: O(n), Space: O(log(n))
