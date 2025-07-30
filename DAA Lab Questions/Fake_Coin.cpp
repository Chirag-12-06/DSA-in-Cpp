#include <iostream>
#include <vector>
using namespace std;

int Sum_of_Array(vector<int> &c, int s, int e)
{
    int sum = 0;
    for (int i = s; i <= e; i++)
    {
        sum += c[i];
    }
    return sum;
}

int Fake_Coin(vector<int> &c, int s, int e)
{
    if (s == e)
    {
        return s + 1;
    }
    if (s == e - 1)
    {
        return c[s] < c[e] ? s + 1 : e + 1;
    }
    int n = e - s + 1;
    int size = n / 3;

    int sum1 = Sum_of_Array(c, s, s + size - 1);
    int sum2 = Sum_of_Array(c, s + size, s + 2 * size - 1);

    if (sum1 == sum2)
    {
        return Fake_Coin(c, s + 2 * size, e);
    }
    else if (sum1 > sum2)
    {
        return Fake_Coin(c, s + size, s + 2 * size - 1);
    }
    else
    {
        return Fake_Coin(c, s, s + size - 1);
    }
}

int main()
{
    vector<int> Coins = {3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3};
    cout << "Fake Coin is at Index: " << Fake_Coin(Coins, 0, Coins.size() - 1) << endl;
}
