#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Activity
{
public:
    int start;
    int end;
    int id;
    Activity(int x, int y, int z)
    {
        start = y;
        end = z;
        id = x;
    }
};

void sortvector(vector<Activity> &v)
{
    sort(v.begin(), v.end(), [](Activity &a, Activity &b)
         { return (a.end < b.end) || (a.end == b.end && (a.start < b.start)); });
}

void Activity_Scheduler(vector<Activity> v)
{
    cout << v[0].id << endl;
    int endtime = v[0].end;
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i].start >= endtime)
        {
            cout << v[i].id << endl;
            endtime = v[i].end;
        }
    }
}

int halls(vector<Activity> v)
{
    vector<int> curr_halls((v[v.size() - 1].end) + 1, 0);
    for (int i = 0; i < v.size(); i++)
    {
        curr_halls[v[i].end]--;
        curr_halls[v[i].start]++;
    }
    int min_halls = 1;
    for (int i = 1; i < curr_halls.size(); i++)
    {
        curr_halls[i] += curr_halls[i - 1];
        if (min_halls < curr_halls[i])
        {
            min_halls = curr_halls[i];
        }
    }
    return min_halls;
}

int main()
{
    // vector<Activity> v={Activity(1,0,6),Activity(2,1,3),Activity(3,4,5),Activity(4,5,7),Activity(5,5,9),Activity(6,8,9)};
    // vector<Activity> p={Activity(1,1,4),Activity(2,3,5),Activity(3,0,6),Activity(4,5,7),Activity(5,3,9),Activity(6,5,9),Activity(7,6,10),Activity(8,8,11),Activity(9,8,12),Activity(10,2,14),Activity(11,12,16),Activity(6,8,9),Activity(6,8,9),Activity(6,8,9),Activity(6,8,9)};
    // vector<Activity> t={Activity(1,1,4),Activity(2,2,3),Activity(3,3,7),Activity(4,4,5),Activity(5,5,6),Activity(6,6,8),Activity(7,7,10),Activity(8,8,9)};
    // sortvector(t);
    // Activity_Scheduler(t);
    vector<Activity> o = {Activity(1, 1, 3), Activity(2, 2, 4), Activity(3, 3, 5), Activity(4, 2, 7), Activity(5, 4, 6), Activity(6, 5, 6), Activity(7, 3, 7), Activity(8, 5, 8), Activity(9, 6, 10), Activity(10, 7, 9), Activity(11, 8, 10)};
    sortvector(o);
    // Activity_Scheduler(o);
    cout << halls(o);
}