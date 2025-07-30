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

int HEAP_EXTRACT_MAX(vector<int> &v){
    if(v.size()<1){
        return -1;
    }
    int max=v[0];
    swap(v[0],v[v.size()-1]);
    v.pop_back();
    MAX_HEAPIFY(v,0,v.size()); 
    return max;
}

int main(){
    vector<int> o={5,1,9,7,2,3,6,13,12,19};
    BULID_MAX_HEAP(o);
    cout<<HEAP_EXTRACT_MAX(o)<<endl;
    for(int i=0;i<o.size();i++){
        cout<<o[i]<<" ";
    }
}