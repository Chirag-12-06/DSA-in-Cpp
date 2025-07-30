#include<iostream>
using namespace std;

//SUM OF SUBSETS
// void subsum(int A[],int n,int sum){
//     if(n==0){
//         cout<<sum<<" ";
//         return;
//     }
//     subsum(A,n-1,sum);
//     subsum(A,n-1,sum+A[n-1]);
// }
// int main(){
//     int n;
//     cin>>n;
//     int A[n];
//     for(int &ele:A){
//         cin>>ele;
//     }
//     subsum(A,n,0);
// }


//NO OF WAYS TO REACH A TARGET
// int ways(int si,int sj,int ei,int ej){
//     if(si==ei-1 || sj==ej-1){
//         return 1;
//     }
//     return ways(si+1,sj,ei,ej) + ways(si,sj+1,ei,ej);
// }
// int main(){
//     cout<<ways(0,0,2,3);
//     return 0;
// }


//PRINT ALL THE SUBSEQUENCES
// void print(string str,int i,string result){
//     if(i==str.length()){
//         cout<<result<<" ";
//         return;
//     }
//     print(str,i+1,result + str[i]);
//     print(str,i+1,result);
// }
// int main(){
//     print("abc",0," ");
//     return 0;
// }
