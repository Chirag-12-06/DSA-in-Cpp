#include<iostream>
using namespace std;

bool check(int a, int b,int c){
    int x = max(a,max(b,c));
    int y,z;
    if(a==x){
        y=b;z=c;
    }

    if(b==x){
        y=a;z=c;
    }
    else{
        y=a,z=b;
    }
    if(x*x==y*y+z*z){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int A,B,C;
    cin>>A>>B>>C;

    if(check(A,B,C)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}