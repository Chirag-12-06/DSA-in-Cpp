#include<iostream>
#include<vector>
#include<unordered_map>
#include<math.h>
using namespace std;


bool isH(int n, unordered_map<int,int> &m){
    if(m[n]){
        return false;
    }
    int sum=0;
    while(n){
        sum+=pow((n%10),2);
        n/=10;
    }
    if(sum==1){
        return true;
    }
    m[n]=sum;
    return isH(sum,m);
}


    bool isHappy(int n) {
        if(n==1){
            return true;
        }
        unordered_map<int,int> m;
        return isH(n,m);
    }

int main(){
    cout<<isHappy(2);
}