#include <iostream>
#include <vector>
using namespace std;

// void Backtrack(vector<vector<int>> &Graph, int st, vector<int> &path)
// {
//     for (int u = 0; u < Graph.size(); u++)
//     {
//         if (Graph[st][u] > 0)
//         {
//             path.push_back(u);
//             int dis=Graph[st][u];
//             Graph[st][u]=0;
//             Graph[u][st]=0;
//             if (path.size() == Graph.size()+1)
//             {
//                 for (int i = 0; i < path.size() - 1; i++)
//                 {
//                     cout << path[i] << "->";
//                 }
//                 cout << path.back() << endl;
//             }
//             Backtrack(Graph, u, path);
//             Graph[st][u]=dis;
//             Graph[u][st]=dis;
//             path.pop_back();
//         }
//     }
// }
// void Eucidian_Paths(vector<vector<int>> Graph)
// {
//     vector<int> path;
//     for (int i = 0; i < Graph.size(); i++)
//     {
//         path.push_back(i);
//         Backtrack(Graph, i, path);
//         path.pop_back();
//     }
// }
// int main()
// {
//     vector<vector<int>> Graph = {{0, 1, 1, 1,0},
//                                  {1, 0, 1, 0,0},
//                                  {1, 1, 0, 0,0},
//                                  {1, 0, 0, 0,1},
//                                  {0, 0, 0, 1,0}};
//     Eucidian_Paths(Graph);
// }

void Backtrack(vector<vector<int>> &Graph, int st, vector<int> &path, int origin)
{
    for (int u = 0; u < Graph.size(); u++)
    {
        if (Graph[st][u] > 0)
        {
            path.push_back(u);
            int dis = Graph[st][u];
            Graph[st][u] = 0;
            Graph[u][st] = 0;
            if (path.size() == Graph.size() + 1 && u == origin)
            {
                for (int i = 0; i < path.size() - 1; i++)
                {
                    cout << path[i] << "->";
                }
                cout << path.back() << endl;
            }
            Backtrack(Graph, u, path, origin);
            Graph[st][u] = dis;
            Graph[u][st] = dis;
            path.pop_back();
        }
    }
}
void Eucidian_Cycles(vector<vector<int>> Graph)
{
    vector<int> path;
    for (int i = 0; i < Graph.size(); i++)
    {
        path.push_back(i);
        Backtrack(Graph, i, path, i);
        path.pop_back();
    }
}
int main()
{
    vector<vector<int>> Graph = {{0, 1, 0, 1},
                                 {1, 0, 1, 0},
                                 {0, 1, 0, 1},
                                 {1, 0, 1, 1}};
    Eucidian_Cycles(Graph);
}
