#include<iostream>
using namespace std;

//PRINT N NATURAL NOS.
// void print(int n){
//     if(n<1){
//         return;
//     }
//     print(n-1);
//     cout<<n<<" ";
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }

//PRINT TABLE
// void table(int n,int m){
//     if(m<1){
//         return;
//     }
//     table(n,m-1);
//     cout<<n*m<<" ";
// }

// int main(){
//     int n,m;
//     cin>>n>>m;
//     table(n,m);
// }

//SUM OF A SERIES OF NATURAL NOS.
int findsum(int n){
    if(n<1){
        return 0;
    }
    return findsum(n-1)+((n%2==0)?-n:n);
}

int main(){
    int n;
    cin>>n;
    cout<<findsum(n);
}