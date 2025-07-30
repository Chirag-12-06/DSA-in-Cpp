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

void INCREASE_KEY(vector<int> &v,int key,int place){
    if(v[place-1]>key){
        cout<<"No. is smaller";
    }
    v[place-1]=key;
    while(place>1 && v[(place-1)/2]<v[place-1]){
        swap(v[place-1],v[(place-1)/2]);
        place=(place)/2;
    }
}

int main(){
    vector<int> o={5,1,9,7,2,3,6,11,13};
    BULID_MAX_HEAP(o);
    for(int i=0;i<o.size();i++){
        cout<<o[i]<<" ";
    }
    cout<<endl;
    INCREASE_KEY(o,12,4);
    for(int i=0;i<o.size();i++){
        cout<<o[i]<<" ";
    }
}