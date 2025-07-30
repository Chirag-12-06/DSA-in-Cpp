#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

bool Is_Safe(int kth_queen, int position, vector<int> &Queens)
{
    int j = kth_queen;
    while (j > 0)
    {
        if (position == Queens[j - 1] || (abs(kth_queen - (j - 1)) == abs(position - Queens[j - 1])))
        {
            return false;
        }
        j--;
    }
    return true;
}

void N_Queen(int kth_queen, int position, vector<int> &Queens)
{
    for (int i = 0; i < Queens.size(); i++)
    {
        if (Is_Safe(kth_queen, i, Queens))
        {
            Queens[kth_queen] = i;
            if (kth_queen == Queens.size() - 1)
            {
                cout << "Solution Found ";
                for (int i = 0; i < Queens.size(); i++)
                {
                    cout << Queens[i] << " ";
                }
                cout << endl;
                return;
            }
            else
            {
                N_Queen(kth_queen + 1, position + 1, Queens);
            }
        }
    }
}

int main()
{
    vector<int> Queens(4, 0);
    N_Queen(0, 0, Queens);
}
