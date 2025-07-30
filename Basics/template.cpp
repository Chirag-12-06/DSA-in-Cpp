#include<iostream>
using namespace std;

template<typename y>
class Node{
    public:
    y val;
    Node* next;
    Node(y data){
        val=data;
        next=NULL;
    }
};

int main(){
    Node<int>* nn=new Node<int>(8);
    cout<<nn->val<<endl;

    Node<char>* g=new Node<char>('o');
    cout<<g->val<<endl;
}