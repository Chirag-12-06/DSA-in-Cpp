#include<iostream>
using namespace std;

int main(){
    // int savings;
    // cout<<"Enter your savings: "; cin>>savings;

    // if(savings >= 7000){
    //     cout<<"Enough\n";    
    // }
    // else if(savings >= 4000){
    //     cout<<"Respectable";
    // }
    // else{
    //     cout<<"Not Enough\n";
    // }

    int a,b,c,d;
    cout<<"Enter 3 nos: "; cin>>a>>b>>c;

    // if(a>c){
    //     if(a>b){
    //         cout<<"The greatest of "<<a <<b <<c<<" is "<<a;
    //     }
    //     else{
    //         cout<<"The greatest of "<<a<<b<<c<<" is "<<b;
    //     }
    // }
    // else{
    //     if(c>b){
    //         cout<<"The greatest of "<<a<<b<<c<<" is "<<c;
    //     }
    //     else{
    //         cout<<"The greatest of "<<a<<b<<c<<" is "<<b;
    //     }
    // }

    //a >c? (a>b? cout<<"The greatest of "<<a <<b <<c<<" is "<<a:cout<<"The greatest of "<<a <<b <<c<<" is "<<b) : (c>b ? cout<<"The greatest of "<<a <<b <<c<<" is "<<c : cout<<"The greatest of "<<a <<b <<c<<" is "<<b);
    d = a>c? (a>b? a:c):(c>b? c:b);
    cout<<d;
    return 0;
}