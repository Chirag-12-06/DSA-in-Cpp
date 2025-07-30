#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        if(i==1){
            for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<i;
        }
        else{
            for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<<i;

        for(int k=1;k<=2*i-3;k++){
            cout<<" ";
        }
        cout<<i;
        }
        cout<<endl;
    }
    for(int j=1;j<=2*n-1;j++){
        cout<<n;
    }
    return 0;
}