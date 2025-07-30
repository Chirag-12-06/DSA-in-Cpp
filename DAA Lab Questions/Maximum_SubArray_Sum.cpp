#include <iostream>
using namespace std;

// BRUTE FORCE I (Time Complexicity n*n*n)
//  int maxSubarraySum (int A [], int n){
//      int ans=INT8_MIN;
//      for (int sub_array_size = 1; sub_array_size <=n; sub_array_size ++){
//          for (int start_index=0; start_index < n; start_index++){
//              if (start_index+sub_array_size >n){
//                  break;
//              }
//              int sum=0;
//              for(int i=start_index; i < (start_index+sub_array_size); i++){
//                  sum+=A[i];
//              }
//              if (sum>ans){
//                  ans=sum;
//              }
//          }
//      }
//      return ans;
//  }
//  int main(){
//      int A[]={-2, -5, 6, -2, -3, 1, 5, -6};
//      cout<<maxSubarraySum(A,sizeof(A)/sizeof(A[0]));
//  }

// BRUTE FORCE II (Time Complexicity n*n)
// int maxSubarraySum(int A[], int n)
// {
//     int ans = INT8_MIN;
//     for (int start_index = 0; start_index < n; start_index++)
//     {
//         int sum = 0;
//         for (int sub_array_size = 1; sub_array_size <= n; sub_array_size++)
//         {
//             if (start_index + sub_array_size > n)
//             {
//                 break;
//             }
//             sum = sum + A[start_index + sub_array_size - 1]; // Last element
//             if (sum > ans)
//             {
//                 ans = sum;
//             }
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int A[] = {-2, -5, 6, -2, -3, 1, 5, -6};
//     cout << maxSubarraySum(A, sizeof(A) / sizeof(A[0]));
// }

// DIVIDE AND CONQUER APPROACH (Time Complexicity n*log(n))
// int crossed_sum(int A[], int s, int mid, int e)
// {
//     int left_sum = INT8_MIN;
//     int sum = 0;
//     for (int i = mid; i >= s; i--)
//     {
//         sum += A[i];
//         if (sum > left_sum)
//         {
//             left_sum = sum;
//         }
//     }
//     int right_sum = INT8_MIN;
//     sum = 0;
//     for (int i = mid + 1; i <= e; i++)
//     {
//         sum += A[i];
//         if (sum > right_sum)
//         {
//             right_sum = sum;
//         }
//     }
//     return (right_sum + left_sum);
// }
// int maxSubarraySum(int A[], int s, int e)
// {
//     if (s == e)
//     {
//         return A[s];
//     }
//     int mid = (s + e) / 2;
//     int left_sum = maxSubarraySum(A, s, mid);
//     int right_sum = maxSubarraySum(A, mid + 1, e);
//     int cross_sum = crossed_sum(A, s, mid, e);
//     return max((left_sum, right_sum), cross_sum);
// }
// int main()
// {
//     int A[] = {-2, -5, 6, -2, -3, 1, 5, -6};
//     cout << maxSubarraySum(A, 0, (sizeof(A) / sizeof(A[0]) - 1));
// }
