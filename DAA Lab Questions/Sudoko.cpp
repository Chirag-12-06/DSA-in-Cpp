#include <iostream>
#include <vector>
using namespace std;

bool next_location(vector<vector<int>> &Board, int &i, int &j)
{
    for (i = 0; i < Board.size(); i++)
    {
        for (j = 0; j < Board[0].size(); j++)
        {
            if (Board[i][j] == 0)
            {
                return true;
            }
        }
    }
    return false;
}

bool valid(vector<vector<int>> &Board, int i, int j, int no)
{
    for (int c = 0; c < Board[i].size(); c++)
    {
        if (Board[i][c] == no)
            return false;
    }
    for (int r = 0; r < Board.size(); r++)
    {
        if (Board[r][j] == no)
            return false;
    }
    int new_i = 3 * (i / 3), new_j = 3 * (j / 3);
    for (int k = 0; k < 3; k++)
    {
        for (int l = 0; l < 3; l++)
        {
            if (Board[new_i + k][new_j + l] == no)
                return false;
        }
    }
    return true;
}

bool solve(vector<vector<int>> &Board)
{
    int i, j;
    if (!next_location(Board, i, j))
        return true;
    for (int val = 1; val <= 9; val++)
    {
        if (valid(Board, i, j, val))
        {
            Board[i][j] = val;
            if (solve(Board))
                return true;
            Board[i][j] = 0;
        }
    }
    return false;
}

int main()
{
    vector<vector<int>> Board = {
        {5, 0, 4, 0, 0, 0, 0, 6, 0},
        {0, 6, 0, 3, 0, 0, 1, 0, 0},
        {0, 9, 2, 5, 4, 0, 0, 0, 0},
        {6, 0, 8, 0, 0, 1, 0, 0, 0},
        {0, 0, 0, 8, 0, 4, 0, 0, 0},
        {0, 0, 0, 2, 0, 0, 6, 0, 1},
        {0, 0, 0, 0, 9, 5, 8, 1, 0},
        {0, 0, 1, 0, 0, 2, 0, 3, 0},
        {0, 8, 0, 0, 0, 0, 2, 0, 7}};

    if (solve(Board))
    {
        for (auto &row : Board)
        {
            for (auto val : row)
            {
                cout << val << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "No solution exists.";
    }
}
