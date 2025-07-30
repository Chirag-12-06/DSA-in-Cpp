#include<iostream>
#include<vector>
using namespace std;

void MAX_HEAPIFY(vector<int> &v,int i){
    int l=2*i+1,r=2*i+2,largest=i;
    if(l<v.size() && v[l]>v[i]){
        largest=l;
    }
    if(r<v.size() && v[r]>v[largest]){
        largest=r;
    }
    if(i!=largest){
        swap(v[i],v[largest]);
        MAX_HEAPIFY(v,largest);
    }
}

void BULID_MAX_HEAP(vector<int> &v){
    for(int i=v.size()/2-1;i>=0;i--){
        MAX_HEAPIFY(v,i);
    }
}

int main(){
    vector<int> o={5,1,9,7,2,3,6};
    BULID_MAX_HEAP(o);
    for(int i=0;i<o.size();i++){
        cout<<o[i]<<" ";
    }
}