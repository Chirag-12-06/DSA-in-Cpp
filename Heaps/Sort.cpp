#include<iostream>
#include<vector>
using namespace std;

void MAX_HEAPIFY(vector<int> &v,int i,int heap_size){
    int l=2*i+1,r=2*i+2,largest=i;
    if(l<heap_size && v[l]>v[i]){
        largest=l;
    }
    if(r<heap_size && v[r]>v[largest]){
        largest=r;
    }
    if(i!=largest){
        swap(v[i],v[largest]);
        MAX_HEAPIFY(v,largest,heap_size);
    }
}

void BULID_MAX_HEAP(vector<int> &v){
    for(int i=v.size()/2-1;i>=0;i--){
        MAX_HEAPIFY(v,i,v.size());
    }
}

void HEAP_SORT(vector<int> &v){
    for(int i=v.size()-1;i>0;i--){
        swap(v[0],v[i]);
        MAX_HEAPIFY(v,0,i-1);
    }
}

int main(){
    vector<int> o={5,1,9,7,2,3,6,11,12};
    BULID_MAX_HEAP(o);
    for(int i=0;i<o.size();i++){
        cout<<o[i]<<" ";
    }
    cout<<"\n";
    HEAP_SORT(o);
    for(int i=0;i<o.size();i++){
        cout<<o[i]<<" ";
    }
}