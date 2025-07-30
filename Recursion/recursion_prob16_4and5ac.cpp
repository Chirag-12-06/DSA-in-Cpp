#include<iostream>
#include<string.h>
using namespace std;

//PRINT ALL PERMUTATAIONS OS A STRING
// void permi(string s,string ans){
//     if(s.length()==0){
//         cout<<ans<<" ";
//         return;
//     }
//     for(int i=0;i<s.length();i++){
//         char c=s[i];
//         string rest=s.substr(0,i) + s.substr(i+1);
//         permi(rest,ans+c);
//     }
// }
// int main(){
//     permi("ABDC","");
// }

//NO OF STEPS REQUIRED
// int steps(int n){
//     if(n<0){
//         return 0;
//     }
//     if(n==0){
//         return 1;
//     }
//     return steps(n-1)+steps(n-2)+steps(n-3)+steps(n-4)+steps(n-5)+steps(n-6);
// }
// int main(){
//     cout<<steps(7);
// }

//TILING PROBLEM
// int tile(int R,int C,int r,int c){
//     if(C==0 || C==1 || C==2){
//         return C;
//     }
//     return tile(R,C-1,r,c)+tile(R,C-2,r,c);
// }
// int main(){
//     cout<<tile(2,3,2,1);
// }

//FRIEND'S PAIRING PROBLEM
// int pairing(int n){
//     if(n==1 || n==0){
//         return 1;
//     }
//     return pairing(n-1) + (n-1)*pairing(n-2);
// }
// int main(){
//     cout<<pairing(3);
// }

//*******KNAPSACK PPROBLEM******

int knapsack(int wi[],int value[],int n,int W){
    if(n==0 || W==0){
        return 0;
    }
    if(wi[n-1]>W){
        return knapsack(wi,value,n-1,W);
    }

    return max((knapsack(wi,value,n-1,W-wi[n-1])+value[n-1]),knapsack(wi,value,n-1,W));
}

int main(){
    int wi[]={10,20,30};
    int value[]={100,550,150};
    cout<<knapsack(wi,value,3,50);
}