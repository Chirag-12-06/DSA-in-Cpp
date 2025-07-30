#include<iostream>
#include<queue>
#include<stack>
using namespace std;


int main(){
    queue<int> q1,q2;
    q1.push(4);
    q1.push(7);
    q1.push(11);
    q1.push(20);
    q1.push(5);
    q1.push(9);

    for(int i=0;i<q1.size()/2;i++){
        int ele=q1.front();
        q2.push(ele);
    }
}
