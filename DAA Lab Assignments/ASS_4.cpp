#include <iostream>
#include <math.h>
#include <vector>
#include<algorithm>
using namespace std;


// 1) We need to find out all the possible arrangements in which N queens can be seated in each row and each column so that all queens are safe. 
// The queen moves in 8 directions and can directly attack in these 8 directions only. 
// bool Is_Safe(int kth_queen, int position, vector<int> Queens)
// {
//     int j = kth_queen;
//     while (j > 0)
//     {
//         if (position == Queens[j - 1] || (abs(kth_queen - (j - 1)) == abs(position - Queens[j - 1])))
//         {
//             return false;
//         }
//         j--;
//     }
//     return true;
// }
// void N_Queen(int kth_queen, int position, vector<int> Queens)
// {
//     for (int i = 0; i < Queens.size(); i++)
//     {
//         if (Is_Safe(kth_queen, i, Queens))
//         {
//             Queens[kth_queen] = i;
//             if (kth_queen == Queens.size() - 1)
//             {
//                 cout << "Solution Found ";
//                 for (int i = 0; i < Queens.size(); i++)
//                 {
//                     cout << Queens[i] << " ";
//                 }
//                 cout << endl;
//                 return;
//             }
//             else
//             {
//                 N_Queen(kth_queen + 1, position + 1, Queens);
//             }
//         }
//     }
// }
// int main()
// {
//     vector<int> Queens(4, 0);
//     N_Queen(0, 0, Queens);
// }


// 2) Given a set[] of non-negative integers and a value sum, the task is to print the subset of the given set whose sum is equal to the given sum.  
// Input: set[] = {1,2,1}, sum = 3 
// Output: [1,2],[2,1]
void Subset(vector<int> &W, int target, int position, vector<int> &ans) {
    if (target == 0) {
        cout << "Solution: {";
        for (int k = 0; k < ans.size(); k++) {
            cout << ans[k];
            if (k != ans.size() - 1) cout << ",";
        }
        cout << "}\n";
        return;
    }

    for (int i = position; i < W.size(); i++) {
        if (W[i] <= target) {
            ans.push_back(W[i]);
            Subset(W, target - W[i], i + 1, ans);
            ans.pop_back();  
        }
    }
}
int main(){
    vector<int> ans;
    vector<int> W={1,2,1};
    int m =3;
    // sort(W.begin(),W.end());
    Subset(W,m,0,ans);
}


// 3) Given an undirected graph and a number m, the task is to color the given graph with at most m colors with no two adjacent vertices 
// colored with same color.  
// Input: graph = {0, 1, 1, 1}, {1, 0, 1, 0}, {1, 1, 0, 1},{1, 0, 1, 0} Output: Solution Exists: Following are the assigned colors: 1  2  3  2 
// Input: graph = {1, 1, 1, 1},{1, 1, 1, 1},{1, 1, 1, 1},{1, 1, 1, 1} Output: Solution does not exist
// bool Is_Safe(int vertex, int colour, vector<int> colours, vector<vector<int>> map)
// {
//     int i = vertex - 1;
//     while (i >= 0)
//     {
//         if (map[vertex][i] == 1 && colours[i] == colour)
//         {
//             return false;
//         }
//         i--;
//     }
//     return true;
// }
// void N_colour(int vertex, vector<int> colours, vector<vector<int>> map)
// {
//     for (int i = 1; i < map.size(); i++)
//     {
//         if (Is_Safe(vertex, i, colours, map))
//         {
//             colours[vertex] = i;
//             if (vertex == map.size() - 1)
//             {
//                 cout << "Solution: ";
//                 for (auto k : colours)
//                 {
//                     cout << k << " ";
//                 }
//                 cout << "\n";
//             }
//             else
//             {
//                 N_colour(vertex + 1, colours, map);
//             }
//         }
//     }
// }
// int main()
// {
//     vector<vector<int>> map = {{0, 1, 1, 1}, {1, 0, 1, 0}, {1, 1, 0, 1}, {1, 0, 1, 0}};
//     // vector<vector<int>> map = {{1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
//     int n = map.size();
//     vector<int> colours(n, 0);
//     N_colour(0, colours, map);
// }

