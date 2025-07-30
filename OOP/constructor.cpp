#include<iostream>
using namespace std;

class rectangle{
    public:
    int l,b;

    rectangle(){
        l=b=0;
    }

    rectangle(int x,int y){
        l=x;
        b=y;
    }

    rectangle(rectangle &e){
        l=e.l;
        b=e.b;
    }
};

int main(){
    rectangle r1,w(34,6);
    cout<<r1.b<<" "<<r1.l;
    cout<<w.b<<" "<<w.l;
    rectangle t(r1);
    cout<<t.b<<" "<<t.l;
}