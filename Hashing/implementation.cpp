#include<iostream>
#include<list>
#include<vector>
#include<algorithm>
using namespace std;

class Hashing{
    vector<list<int>> Hashtable;
    int size;

    public:
    Hashing(int s){
        size=s;
        Hashtable.resize(size);
    }

    int Hashvalue(int k){
        return k%size;
    }

    void add_key(int k){
        int idx=Hashvalue(k);
        Hashtable[idx].push_back(k);
    }

    list<int>::iterator Search_key(int k){
        int idx=Hashvalue(k);
        return find(Hashtable[idx].begin(),Hashtable[idx].end(),k);
    }

    void delete_key(int k){
        int idx=Hashvalue(k);
        if(Search_key(k)!=Hashtable[idx].end()){
            Hashtable[idx].erase(Search_key(k));
            cout<<k<<" deleted from table"<<endl;
        }
        else{
            cout<<k<<" not present in table"<<endl;
        }
    }
};

int main(){
    Hashing h(10);
    h.add_key(8);
    h.add_key(3);
    h.add_key(7);
    h.add_key(3);
    h.delete_key(3);
    h.delete_key(3);
    h.delete_key(3);
}