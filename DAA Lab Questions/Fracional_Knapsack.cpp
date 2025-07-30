#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Item{
    public:
    int Weight;
    int price;
    int id;
    Item(int x,int y,int z){
        Weight=y;
        price=z;
        id=x;
    }
};

void sortvector(vector<Item> &v){
    sort(v.begin(),v.end(),[](Item &a,Item &b){
        return ((double)a.price/a.Weight>(double)b.price/b.Weight) || ((double)a.price/a.Weight == (double)b.price/a.Weight && (a.Weight>b.Weight));
    });
}


double max_profit(vector<Item> v,int weight_allowed){
    double profit=0;
    for(int i=0;i<v.size();i++){
        if(v[i].Weight<weight_allowed){
            weight_allowed-=v[i].Weight;
            profit+=v[i].price;
        }
        else if(weight_allowed>0){
            profit+=((double)weight_allowed/v[i].Weight)*v[i].price;
            break;
        }
    }
    return profit;
}

int main(){
    vector<Item> v={Item(1,5,30),Item(2,10,40),Item(4,22,77),Item(3,15,45),Item(5,25,90)};
    vector<Item> t={Item(1,2,15),Item(2,5,12),Item(3,3,9),Item(4,4,16),Item(5,6,17)};
    int capacity=12;
    sortvector(t);
    for(auto i: t){
        cout<<i.id<<endl;
    }
    cout<<max_profit(t,capacity)<<endl;
}