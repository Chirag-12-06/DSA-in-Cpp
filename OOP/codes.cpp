#include<iostream>
using namespace std;

class A{
    int x;
    public:
    void show(){
        cout<<x<<endl;
    }
};

class B:private A{
    int u;
    public:
    void display(){
        cout<<u<<endl;
        show();
    }
};

int main(){
    A a;
    a.show();
    B b;
    b.display();
    // b.show();
}