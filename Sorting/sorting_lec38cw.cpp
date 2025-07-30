#include<iostream>
#include<string.h>
using namespace std;

//SORT 0'S TO END WITHOUT CHANGING ORDER OF NON 0'S
// int main(){
//     int n;
//     cin>>n;
//     int A[n];
//     for(int &e:A){
//         cin>>e;
//     }
//     for(int i=n-1;i>=0;i--){
//         if(A[i]==0){
//             int j=i;       
//             while(j<n-1 && A[j+1]!=0){
//                 A[j]=A[j+1];
//                 j++;
//             }
//             A[j]=0;
//         }
//     }
//     for(int e:A){
//         cout<<e<<" ";
//     }
// }

//ARRANGE IN LEXICOGRAPHICAL ORDER
// int main(){
//     char A[][60]={"papaya","lime","watermelon","apple","mango","kivi"};
//     int n=sizeof(A)/sizeof(A[0]);
//     for(int i=0;i<n;i++){
//         int min=i;
//         for(int j=i+1;j<n;j++){
//             if(strcmp(A[min],A[j])>0){
//                 min=j;
//             }
//         }
//         if(i!=min){
//             swap(A[i],A[min]);            
//         }
//     }
//     for(char* e:A){
//         cout<<e<<" ";
//     }
// }