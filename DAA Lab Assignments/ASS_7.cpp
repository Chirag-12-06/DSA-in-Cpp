#include <iostream>
#include <vector>
#include <algorithm>
#include<queue>
#include<limits.h>
using namespace std;

int Src(vector<vector<int>> &Graph){
    int s=0,g=Graph.size();
    bool flag=true;
    for(int i=s;i<g;i++){
        flag=true;
        for(int j=0;j<g;j++){
            if(Graph[j][i]!=0){
                flag=false;
                break;
            }
        }
        if(flag){
            s=i;
            break;
        }
    }
    return s;
}

int Sink(vector<vector<int>> &Graph){
    int s=0,g=Graph.size();
    bool flag=true;
    for(int i=s;i<g;i++){
        flag=true;
        for(int j=0;j<g;j++){
            if(Graph[i][j]!=0){
                flag=false;
                break;
            }
        }
        if(flag){
            s=i;
            break;
        }
    }
    return s;
}

bool Flow(vector<vector<int>> &Graph,int source,int sink,vector<int> &dir){
    queue<int> q;
    vector<bool> visited(Graph.size(),false);
    visited[source]=true;
    q.push(source);

    dir.assign(Graph.size(), -1);

    while(!q.empty()){
        int u=q.front();
        q.pop();

        for(int v=0;v<Graph.size();v++){
            if(visited[v]==false && Graph[u][v]>0){
                q.push(v);
                visited[v]=true;
                dir[v]=u;
                if(v==sink){
                    return true;
                }
            }
        }
    }
    return false;
}

int fordFulkerson(vector<vector<int>> &Graph,int source,int sink){
    int ma=0;
    vector<int> dir(Graph.size(),0);
    while(Flow(Graph,source,sink,dir)){
        int flow=INT_MAX;
        for (int v = sink; v != source; v = dir[v]) {
            int u = dir[v];
            flow = min(flow, Graph[u][v]);
        }
        cout<<flow<<endl;
        for(auto i:dir){
            cout<<i<<" ";
        }
        cout<<endl;
        for (int v = sink; v != source; v = dir[v]) {
            int u = dir[v];
            Graph[u][v]-=flow;
        }
        ma+=flow;
    }
    return ma;
}

int main(){
    vector<vector<int>> Graph={{0,16,13,0,0,0},
                               {0,0,10,12,0,0},
                               {0,4,0,0,14,0},
                               {0,0,9,0,0,20},
                               {0,0,0,7,0,4},
                               {0,0,0,0,0,0}};

    int source=Src(Graph);                           
    int sink=Sink(Graph);
    int max_flow=fordFulkerson(Graph,source,sink);
    cout<<max_flow;
}