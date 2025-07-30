#include <iostream>
#include <vector>
#include<limits.h>
using namespace std;

// void Backtrack(vector<vector<int>> &Graph, int st, vector<bool> &visited, vector<int> &path)
// {
//     for (int u = 0; u < Graph.size(); u++)
//     {
//         if (visited[u] == false && Graph[st][u] > 0)
//         {
//             visited[u] = true;
//             path.push_back(u);
//             if (path.size() == Graph.size())
//             {
//                 for (int i = 0; i < path.size() - 1; i++)
//                 {
//                     cout << path[i] << "->";
//                 }
//                 cout << path.back() << endl;
//             }
//             Backtrack(Graph, u, visited, path);
//             path.pop_back();
//             visited[u] = false;
//         }
//     }
// }
// void Hamitonian_Paths(vector<vector<int>> &Graph)
// {
//     vector<bool> visited(Graph.size(), false);
//     vector<int> path;
//     for (int i = 0; i < Graph.size(); i++)
//     {
//         visited[i] = true;
//         path.push_back(i);
//         Backtrack(Graph, i, visited, path);
//         path.pop_back();
//         visited[i] = false;
//     }
// }
// int main()
// {
//     vector<vector<int>> Graph = {{0, 1, 0, 0},
//                                  {1, 0, 1, 1},
//                                  {0, 1, 0, 1},
//                                  {0, 1, 1, 1}};
//     Hamitonian_Paths(Graph);
// }

// void Backtrack_cycle(vector<vector<int>> &Graph, int st, vector<bool> &visited, vector<int> &path, int &origin)
// {
//     for (int u = 0; u < Graph.size(); u++)
//     {
//         if (visited[u] == false && Graph[st][u] > 0)
//         {
//             visited[u] = true;
//             path.push_back(u);
//             if (path.size() == Graph.size() && Graph[u][origin] > 0)
//             {
//                 for (int i = 0; i < path.size() ; i++)
//                 {
//                     cout << path[i] << "->";
//                 }
//                 cout << origin << endl;
//             }
//             Backtrack_cycle(Graph, u, visited, path,origin);
//             path.pop_back();
//             visited[u] = false;
//         }
//     }
// }
// void Hamitonian_Cycles(vector<vector<int>> &Graph)
// {
//     vector<bool> visited(Graph.size(), false);
//     vector<int> path;
//     for (int i = 0; i < Graph.size(); i++)
//     {
//         visited[i] = true;
//         path.push_back(i);
//         Backtrack_cycle(Graph, i, visited, path, i);
//         path.pop_back();
//         visited[i] = false;
//     }
// }
// int main()
// {
//     vector<vector<int>> Graph = {{0, 1, 0, 1},
//                                  {1, 1, 1, 1},
//                                  {0, 1, 0, 1},
//                                  {1, 1, 1, 1}};
//     Hamitonian_Cycles(Graph);
// }

