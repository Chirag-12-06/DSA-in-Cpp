#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

bool Is_Safe(int vertex, int colour, vector<int> colours, vector<vector<int>> map)
{
    int i = vertex - 1;
    while (i >= 0)
    {
        if (map[vertex][i] == 1 && colours[i] == colour)
        {
            return false;
        }
        i--;
    }
    return true;
}

void N_colour(int vertex, vector<int> colours, vector<vector<int>> map)
{
    for (int i = 1; i < map.size(); i++)
    {
        if (Is_Safe(vertex, i, colours, map))
        {
            colours[vertex] = i;
            if (vertex == map.size() - 1)
            {
                cout << "Solution: ";
                for (auto k : colours)
                {
                    cout << k << " ";
                }
                cout << "\n";
            }
            else
            {
                N_colour(vertex + 1, colours, map);
            }
        }
    }
}

int main()
{
    vector<vector<int>> map = {{0, 1, 0, 1}, {1, 0, 1, 1}, {0, 1, 0, 1}, {1, 1, 1, 0}};
    // vector<vector<int>> map = {{1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}, {1, 1, 1, 1}};
    int n = map.size();
    vector<int> colours(n, 0);
    N_colour(0, colours, map);
}

