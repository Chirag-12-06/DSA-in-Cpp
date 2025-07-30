#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main(){
    vector<int> v={4,5,6,0,3,7,1,9};
    for(vector<int>::iterator i=v.begin();i!=v.end();++i){
        cout<<*i<<" ";
    }
    cout<<endl;
    for(auto i=v.begin();i!=v.end();++i){
        cout<<*i<<" ";
    }
    cout<<endl;
    cout<<accumulate(v.begin(),v.end(),10);
}