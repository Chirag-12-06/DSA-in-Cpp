#include<iostream>
using namespace std;

class Stack{
    int capacity;
    int* A;
    int top_idx;
    public:
    Stack(int c){
        this->capacity=c;
        A=new int[c];
        this->top_idx=-1;
    }
    void push(int data){
        if(isFull()){
            cout<<"Overflow\n";
            return;
        }
        top_idx++;
        A[top_idx]=data;
        return;
    }

    void pop(){
        if(isEmpty()){
            cout<<"Underflow\n";
        }
        cout<<A[top_idx]<<"\n";
        top_idx--;
    }

    void peek(){
        if(isEmpty()){
            cout<<"Underflow\n";
        }
        cout<<A[top_idx]<<"\n";
    }

    bool isEmpty(){
        return this->top_idx==-1;
    }

    int size(){
        return top_idx+1;
    }

    bool isFull(){
        return top_idx==capacity-1;
    }

    void display(){
        while(!isEmpty()){
            pop();
        }
    }
};

int main(){
    Stack s(2);
   
    s.push(3);
    s.push(9);
    cout<<s.isEmpty();
    cout<<s.size();
    cout<<s.isFull();
    s.display();
}