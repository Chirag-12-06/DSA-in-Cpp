#include<iostream>
using namespace std;

int main(){
    int A[]={1,2,4,68,7,8,45};

    for(int ele:A){
        cout<<ele<<endl;
    }
    char V[5];
    for(char &ele:V){
        cin>>ele;
    }

    for(int i=0;i<5;i++){
        cout<<V[i];
    }
}