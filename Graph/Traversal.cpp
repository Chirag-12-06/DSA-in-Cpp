#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

//BFS
// vector<int> BFS(int v,vector<int> adj[]){
//     bool visited[v]={false};
//     vector<int> ans;
//     visited[0]=true;
//     queue<int> q;
//     q.push(0);
//     while(!q.empty()){
//         int node=q.front();
//         q.pop();
//         ans.push_back(node);
//         for(auto it : adj[node]){
//             if(!visited[it]){
//                 visited[it]=true;
//                 q.push(it);
//             }
//         }
//     }
//     return ans;
// }
// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<int> adj[n+1];
//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     vector<int> bfs=BFS(n,adj);
//     for(auto i: bfs){
//         cout<<bfs[i]<<" ";
//     }
// }

//DFS
// vector<int> DFS(int v,vector<int> adj[]){
    // bool visited[v]={false};
    // vector<int> ans;
    // visited[0]=true;
    // stack<int> s;
    // s.push(0);
    // while(!s.empty()){
    //     int node=s.top();
    //     s.pop();
    //     ans.push_back(node);
    //     for(auto it : adj[node]){
    //         if(!visited[it]){
    //             visited[it]=true;
    //             s.push(it);
    //         }
    //     }
//     }
//     return ans;
// }
// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<int> adj[n];
//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     vector<int> dfs=DFS(n,adj);
//     for(auto i: dfs){
//         cout<<i<<" ";
//     }
// }

//Reccursive DFS
// void DFSReccu(int n, vector<int> adja[], vector<bool>& visited, int start){
//     cout<<start<<" ";
//     visited[start]=true;
//     for(int neighboor:adja[start]){
//         if(!visited[neighboor]){
//             DFSReccu(n,adja,visited,neighboor);
//         }
//     }
// }
// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<int> adj[n];
//     vector<bool> visit(n,false);
//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }
//     DFSReccu(n,adj,visit,0);
// }

