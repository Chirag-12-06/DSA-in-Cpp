#include<iostream>
#include<cmath>
using namespace std;

//GCF OF 2 NOS. USING EUCLID'S ALGORITHM
// void GCF(int a,int b){
//     if(b==0){
//         cout<<a;
//         return;
//     }
//     int m=max(a,b);
//     int n=min(a,b);
//     GCF(n,m%n);
// }
// int main(){
//     int a,b;
//     cin>>a>>b;
//     GCF(a,b);
// }

//CHECK ARMSTRONG NOS.
// int sumd(int n,int d){
//     if(n<=9){
//         return pow(n,d);
//     }
//     return sumd(n/10,d) + pow(n%10,d);
// }
// int main(){
//     int n,d;
//     cin>>d>>n;
//     bool ans= sumd(n,d)== n;
//     cout<<ans;
// }

//FROG PROBLEM
// int cal(int A[],int n){
//     if(n==2 || n==3){
//         return abs(A[0]-A[n-1]);
//     }
//     return min(abs(A[n-3]-A[n-1])+ abs(cal(A,n-2)),abs(A[n-2]-A[n-1])+ abs(cal(A,n-1)));
// }
// int main(){
//     int n;
//     cin>>n;
//     int A[n];
//     for(int &ele:A){
//         cin>>ele;
//     }
//     int amount=cal(A,n);
//     cout<<amount;
// }