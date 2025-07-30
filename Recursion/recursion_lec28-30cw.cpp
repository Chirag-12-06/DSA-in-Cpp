#include<iostream>
#include<cmath>
using namespace std;

//FIND SUM OF DIGITS RECURSIVELY
// int findsum(int n){
//     if(n>=0 && n<=9){
//         return n;
//     }
//     return n%10 + findsum(n/10);
// }


// int find(int p,int q){
//     if(q==0){
//         return 1;
//     }
//     return p * find(p,q-1);
// }

// int optipower(int p,int q){
//     if(q==0){
//         return 1;
//     }
//     if(q%2==0){
//         return pow(optipower(p,q/2),2);
//     }
//     return p * pow(optipower(p,(q-1)/2),2);
// }

// int main(){
//     int n,sum;
//     cin>>n;
//     sum=findsum(768);
//     cout<<sum;

    
//     int power=find(4,3);
//     cout<<power;

//     int ans=optipower(5,3);
//     cout<<ans;
// }


//REMOVE A CHARACTER FROM A STRING
// string f(string s,int idx,int n){
//     if(idx==n){
//         return "";
//     }
//     string ans="";
//     ans+=s[idx];
//     return s[idx]=='a' ? "": ans + f(s,idx+1,n); 
// }
// int main(){
//     string S="dfgdm";
//     int n=5;
//     cout<<f(S,0,n);
// }

//CHECK IF A NUMBER IS PALIMDRONE
// bool check(int n, int *temp){
//     if(n>=0 && n<=9){
//         int d=*temp%10;
//         (*temp)/=10;
//         return (n==d);
//     }
//     bool result (check(n/10,temp) and (n%10 ==(*temp)%10));
//     (*temp)/=10;
//     return result;
// }
// int main(){
//     int n=1223;
//     int a=n;
//     int *temp=&a;
//     bool ans=check(n,temp);
//     cout<<ans;
//     return 0;
// }