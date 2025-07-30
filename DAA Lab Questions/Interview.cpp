#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct Slot{
    int id;
    float start_time;
    float end_time;
    Slot(int id,float start_time,float end_time): id(id),start_time(start_time),end_time(end_time) {};
};

void sortSlots(vector<Slot> &v){
    sort(v.begin(),v.end(),[](Slot &a,Slot &b){
        return (a.start_time<b.start_time) || (a.start_time==b.start_time && a.end_time<b.end_time);
    });
}

int interviewers(vector<Slot> &v){
    int count=1;
    int st=v[0].end_time;
    for(auto i:v){
        if(i.start_time<st){
            count++;
            st=i.end_time;
        }

    }
}


int main(){
    vector<Slot> candidates = {Slot(1, 9.10, 10.10),Slot(2, 11.00, 11.20),Slot(3, 10.30, 10.45),Slot(4, 12.00, 12.30),Slot(5, 11.20, 11.55),Slot(6, 10.10, 10.30),
                               Slot(7, 10.45, 11.15),Slot(8, 11.30, 12.00),Slot(9, 9.00, 10.00),Slot(10, 12.40, 13.00), Slot(11, 10.10, 11.00),Slot(12, 9.55, 10.30),
                               Slot(13, 11.05, 11.35),Slot(14, 11.35, 12.00)};
    sortSlots(candidates);
    for(auto i:candidates){
        cout<<i.id<<" ";
    }

}

