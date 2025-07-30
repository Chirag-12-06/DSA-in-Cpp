#include <iostream>
using namespace std;

// Q1 Consider an array arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}, using Binary Search find the target 23.
//  int binarySearch(int arr[], int left, int right, int target)
//  {
//      while (left <= right)
//      {
//          int mid = left + (right - left) / 2;
//          if (arr[mid] == target)
//              return mid;
//          else if (arr[mid] < target)
//              left = mid + 1;
//          else
//              right = mid - 1;
//      }
//      return -1;
//  }
//  int main()
//  {
//      int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
//      int size = sizeof(arr) / sizeof(arr[0]);
//      int target = 23;
//      int result = binarySearch(arr, 0, size - 1, target);
//      if (result != -1)
//          cout << "Element found at index " << result << endl;
//      else
//          cout << "Element not found" << endl;
//      return 0;
//  }

// Q2 Implement Merge sort for the given array int arr[] = { 12, 11, 13, 5, 6, 7 }
// void merge(int arr[], int left, int mid, int right)
// {
//     int n1 = mid - left + 1;
//     int n2 = right - mid;
//     int L[n1], R[n2];
//     for (int i = 0; i < n1; i++)
//         L[i] = arr[left + i];
//     for (int i = 0; i < n2; i++)
//         R[i] = arr[mid + 1 + i];
//     int i = 0, j = 0, k = left;
//     while (i < n1 && j < n2)
//     {
//         if (L[i] <= R[j])
//             arr[k++] = L[i++];
//         else
//             arr[k++] = R[j++];
//     }
//     while (i < n1)
//         arr[k++] = L[i++];
//     while (j < n2)
//         arr[k++] = R[j++];
// }
// void mergeSort(int arr[], int left, int right)
// {
//     if (left < right)
//     {
//         int mid = left + (right - left) / 2;
//         mergeSort(arr, left, mid);
//         mergeSort(arr, mid + 1, right);
//         merge(arr, left, mid, right);
//     }
// }
// int main()
// {
//     int arr[] = {12, 11, 13, 5, 6, 7};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     mergeSort(arr, 0, size - 1);
//     for (int i = 0; i < size; i++)
//         cout << arr[i] << " ";
//     cout << endl;
//     return 0;
// }

// Q3 Implement Quick Sort for arr[n] = { 4, 2, 6, 9, 2 }
// int partition(int arr[], int low, int high)
// {
//     int pivot = arr[high];
//     int i = low - 1;
//     for (int j = low; j < high; j++)
//     {
//         if (arr[j] <= pivot)
//         {
//             i++;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[high]);
//     return i + 1;
// }
// void quickSort(int arr[], int low, int high)
// {
//     if (low < high)
//     {
//         int pi = partition(arr, low, high);
//         quickSort(arr, low, pi - 1);
//         quickSort(arr, pi + 1, high);
//     }
// }
// int main()
// {
//     int arr[] = {4, 2, 6, 9, 2};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     quickSort(arr, 0, size - 1);
//     for (int i = 0; i < size; i++)
//         cout << arr[i] << " ";
//     cout << endl;
//     return 0;
// }

// You are given a one dimensional array that may contain both positive and negative integers, find the sum of contiguous subarray of numbers which has the largest sum. For example, if the given array is {-2, -5, 6, -2, -3, 1, 5, -6}, then the maximum subarray sum is 7
//  BRUTE FORCE I (Time Complexicity n*n*n)
//   int maxSubarraySum (int A [], int n){
//       int ans=INT8_MIN;
//       for (int sub_array_size = 1; sub_array_size <=n; sub_array_size ++){
//           for (int start_index=0; start_index < n; start_index++){
//               if (start_index+sub_array_size >n){
//                   break;
//               }
//               int sum=0;
//               for(int i=start_index; i < (start_index+sub_array_size); i++){
//                   sum+=A[i];
//               }
//               if (sum>ans){
//                   ans=sum;
//               }
//           }
//       }
//       return ans;
//   }
//   int main(){
//       int A[]={-2, -5, 6, -2, -3, 1, 5, -6};
//       cout<<maxSubarraySum(A,sizeof(A)/sizeof(A[0]));
//   }
//  BRUTE FORCE II (Time Complexicity n*n)
//  int maxSubarraySum(int A[], int n)
//  {
//      int ans = INT8_MIN;
//      for (int start_index = 0; start_index < n; start_index++)
//      {
//          int sum = 0;
//          for (int sub_array_size = 1; sub_array_size <= n; sub_array_size++)
//          {
//              if (start_index + sub_array_size > n)
//              {
//                  break;
//              }
//              sum = sum + A[start_index + sub_array_size - 1]; // Last element
//              if (sum > ans)
//              {
//                  ans = sum;
//              }
//          }
//      }
//      return ans;
//  }
//  int main()
//  {
//      int A[] = {-2, -5, 6, -2, -3, 1, 5, -6};
//      cout << maxSubarraySum(A, sizeof(A) / sizeof(A[0]));
//  }
//  DIVIDE AND CONQUER APPROACH (Time Complexicity n*log(n))
//  int crossed_sum(int A[], int s, int mid, int e)
//  {
//      int left_sum = INT8_MIN;
//      int sum = 0;
//      for (int i = mid; i >= s; i--)
//      {
//          sum += A[i];
//          if (sum > left_sum)
//          {
//              left_sum = sum;
//          }
//      }
//      int right_sum = INT8_MIN;
//      sum = 0;
//      for (int i = mid + 1; i <= e; i++)
//      {
//          sum += A[i];
//          if (sum > right_sum)
//          {
//              right_sum = sum;
//          }
//      }
//      return (right_sum + left_sum);
//  }
//  int maxSubarraySum(int A[], int s, int e)
//  {
//      if (s == e)
//      {
//          return A[s];
//      }
//      int mid = (s + e) / 2;
//      int left_sum = maxSubarraySum(A, s, mid);
//      int right_sum = maxSubarraySum(A, mid + 1, e);
//      int cross_sum = crossed_sum(A, s, mid, e);
//      return max((left_sum, right_sum), cross_sum);
//  }
//  int main()
//  {
//      int A[] = {-2, -5, 6, -2, -3, 1, 5, -6};
//      cout << maxSubarraySum(A, 0, (sizeof(A) / sizeof(A[0]) - 1));
//  }

// An array of N integers,perform this operation N-2 times: For each contiguous subarray of odd size greater than,find the median of each subarray.In each move,remove the first occurrence of value from the original array. After removing the element the array size reduces by 1 and no void spaces are left.
//  int main(){
//      int A[] = {2,3,2,6,5,8,1};
//      int mini=INT8_MAX,maxi=INT8_MIN;
//      for(int i=0;i<sizeof(A)/sizeof(A[0]);i++){
//          if(A[i]>maxi){
//              maxi=A[i];
//          }
//          if(A[i]<mini){
//              mini=A[i];
//          }
//      }
//      cout<<(mini+maxi)/2;
//  }

// A sequence A of length L and a number K.A number is special if there exists a contiguous subarray that contains K exactly numbers that are strictly greater than A[L] . The specialty of a sequence is the sum of special numbers that are available in the sequence.
//  int main(){
//      int A[]={4,3,2,7,8};
//      int l=sizeof(A)/sizeof(A[0]);
//      int k=2;
//      int sum=0,count;
//      for(int i=0;i<l-k;i++){
//          count=0;
//          for(int j=i+1;j<l;j++){
//              if(A[j]>A[i]){
//                  count++;
//              }
//          }
//          if(count == 2){
//              sum += A[i];
//          }
//      }
//      cout<<sum<<endl;
//  }

// Kaneki has N rectangles of width W and height H.(Rectangle cannot be rotated).Each line contains three integers N, H, and W respectively.Find the minimum size of the square that will be able to fill all n rectangles in it.
// bool canFit(int S, int N, int W, int H)
// {
//     return (S / W) * (S / H) >= N;
// }
// int findMinSquareSize(int N, int W, int H)
// {
//     int left = max(W, H);
//     int right = W * N;
//     int result = right;
//     while (left <= right)
//     {
//         int mid = (left + right) / 2;
//         if (canFit(mid, N, W, H))
//         {
//             result = mid;
//             right = mid - 1;
//         }
//         else
//         {
//             left = mid + 1;
//         }
//     }
//     return result;
// }
// int main()
// {
//     int N, H, W;
//     cin >> N >> H >> W;
//     cout << findMinSquareSize(N, W, H) << endl;
//     return 0;
// }
