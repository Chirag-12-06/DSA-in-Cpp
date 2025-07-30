#include<iostream>
using namespace std;

int main(){
    int n,a=1;
    cin>>n;

    // for(int i=1;i<=2*n;i++){
    //     if(i<=n){
    //         for(int j=1;j<=i;j++){
    //             cout<<"#";
    //         }

    //         for(int j=1;j<=2*(n-i);j++){
    //             cout<<" ";
    //         }

    //         for(int j=1;j<=i;j++){
    //             cout<<"#";
    //         }
    //     }
    //     else{
    //          for(int j=2*n;j>=i;j--){
    //             cout<<"#";
    //         }

    //         for(int j=1;j<=2*(i-n-1);j++){
    //             cout<<" ";
    //         }

    //         for(int j=2*n;j>=i;j--){
    //             cout<<"#";
    //         }
    //     }
    //     cout<<endl;
    // }

    for(int i=1;i<=n;i++){
        for(int j=i;j<n;j++){
            cout<<" ";
        }
        for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        for(int j=2;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
