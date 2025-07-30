#include<iostream>
#include<vector>
using namespace std;

//NON-WEIGHTED UNDIRECTED GRAPH
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
// }

//NON-WEIGHTED DIRECTED GRAPH
// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<int> adj[n+1];
//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         adj[u].push_back(v);
//     }
// }

//WEIGHTED UNDIRECTED GRAPH
// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<pair<int,int>> adj[n+1];
//     for(int i=0;i<m;i++){
//         int u,v,weight;
//         cin>>u>>v>>weight;
//         pair<int,int> p1=make_pair(v,weight);
//         pair<int,int> p2=make_pair(u,weight);
//         adj[u].push_back(p1);
//         adj[v].push_back(p2);
//     }
// }

//WEIGHTED DIRECTED GRAPH
// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<pair<int,int>> adj[n+1];
//     for(int i=0;i<m;i++){
//         int u,v,weight;
//         cin>>u>>v>>weight;
//         pair<int,int> p1=make_pair(v,weight);
//         adj[u].push_back(p1);
//     }
// }