#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Q1 Given the Input: start[]  =  {1, 3, 0, 5, 8, 5}, finish[] =  {2, 4, 6, 7, 9, 9}; using Activity selection. Select the maximum number of activities that can be performed by a single person, assuming that a person can only work on a single activity at a time.
// class Activity
// {
// public:
//     int start;
//     int end;
//     int id;
//     Activity(int x, int y, int z)
//     {
//         start = y;
//         end = z;
//         id = x;
//     }
// };
// void sortvector(vector<Activity> &v)
// {
//     sort(v.begin(), v.end(), [](Activity &a, Activity &b)
//          { return (a.end < b.end) || (a.end == b.end && (a.start < b.start)); });
// }
// void Activity_Scheduler(vector<Activity> v)
// {
//     cout << v[0].id << endl;
//     int endtime = v[0].end;
//     for (int i = 1; i < v.size(); i++)
//     {
//         if (v[i].start >= endtime)
//         {
//             cout << v[i].id << endl;
//             endtime = v[i].end;
//         }
//     }
// }
// int main()
// {
//     vector<Activity> t={Activity(1,1,2),Activity(2,3,4),Activity(3,0,6),Activity(4,5,7),Activity(5,8,9),Activity(6,5,9)};
//     sortvector(t);
//     Activity_Scheduler(t);
// }

// Q2Given an array of jobs where every job has a deadline and associated profit if the job is finished before the deadline.Maximize the total profit if only one job can be scheduled at a time.
// JobID     a  b  c  d
// Deadline  4  1  1  1
// Profit    20 10 40 30
// struct Job
// {
//     char Id;
//     int deadline;
//     int profit;
//     Job(char x, int y, int z)
//     {
//         Id = x;
//         deadline = y;
//         profit = z;
//     }
// };
// void sortvector(vector<Job> &v)
// {
//     sort(v.begin(), v.end(), [](Job &a, Job &b)
//          { return (a.deadline < b.deadline) || (a.deadline == b.deadline && (a.profit > b.profit)); });
// }
// int maxProfit(vector<Job> v)
// {
//     int profit = v[0].profit;
//     int dead = v[0].deadline;
//     for (int i = 1; i < v.size(); i++)
//     {
//         if (v[i].deadline > dead)
//         {
//             profit += v[i].profit;
//             dead = v[i].deadline;
//         }
//     }
//     return profit;
// }
// int main()
// {
//     vector<Job> v = {Job('a', 4, 20), Job('b', 1, 10), Job('c', 1, 40), Job('d', 1, 30)};
//     sortvector(v);
//     cout << maxProfit(v);
// }

// Q3 Given the weights and profits of N items, in the form of {profit, weight},  Input: arr[] ={{60, 10},{100, 20},{120, 30}}, put these items in a knapsack of capacity W= 50 to get the maximum total profit in the knapsack. Use Fractional Knapsack, for maximizing the total value of the knapsack.
// class Item{
//     public:
//     int Weight;
//     int price;
//     int id;
//     Item(int x,int y,int z){
//         Weight=y;
//         price=z;
//         id=x;
//     }
// };
// void sortvector(vector<Item> &v){
//     sort(v.begin(),v.end(),[](Item &a,Item &b){
//         return ((double)a.price/a.Weight>(double)b.price/b.Weight) || ((double)a.price/a.Weight == (double)b.price/a.Weight && (a.Weight>b.Weight));
//     });
// }
// double max_profit(vector<Item> v,int weight_allowed){
//     double profit=0;
//     for(int i=0;i<v.size();i++){
//         if(v[i].Weight<weight_allowed){
//             weight_allowed-=v[i].Weight;
//             profit+=v[i].price;
//         }
//         else if(weight_allowed>0){
//             profit+=((double)weight_allowed/v[i].Weight)*v[i].price;
//             break;
//         }
//     }
//     return profit;
// }
// int main(){
//     vector<Item> t={Item(1,10,60),Item(2,20,100),Item(3,30,120)};
//     int capacity=50;
//     sortvector(t);
//     cout<<max_profit(t,capacity)<<endl;
// }

// Given an array of size N, find the majority element. The majority element is the element that appears more than floor(N/2) times
// int majority(vector<int> v)
// {
//     int ans;
//     int count = v.size() / 2;
//     for (auto i : v)
//     {
//         if (!count)
//         {
//             ans = v[i];
//         }
//         else if (v[i] == ans)
//         {
//             count++;
//         }
//         else
//         {
//             count--;
//         }
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     vector<int> v;
//     for (int i = 0; i < n; i++)
//     {
//         int a;
//         cin >> a;
//         v.push_back(a);
//     }
//     cout << majority(v);
// }

// N children are standing in a line. Each child is assigned a rating value.
// Each child must have at least one candy.Children with a higher rating get more candies than their neighbors.The minimum number of candies you must give?
// int Min_Candies(vector<int> v)
// {
//     vector<int> candies(v.size(), 1);
//     for (int i = 1; i < v.size(); i++)
//     {
//         if (v[i] > v[i - 1])
//         {
//             candies[i] = candies[i - 1] + 1;
//         }
//     }
//     for (int i = v.size() - 2; i >= 0; i--)
//     {
//         if (v[i] > v[i + 1])
//         {
//             candies[i] = candies[i - 1] + 1;
//         }
//     }
//     int sum = 0;
//     for (auto i : candies)
//     {
//         sum += i;
//     }
//     return sum;
// }
// int main()
// {
//     vector<int> children = {1, 2, 2, 1, 1};
//     cout << Min_Candies(children);
// }

// You are given container full of water. Container can have limited amount of water. You also have N bottles to fill. You need to find the maximum numbers of bottles you can fill.
// First line contains one integer, T, number of test cases.First line of each test case contains two integer, N and X, number of bottles and capacity of the container.Second line of each test case contains N space separated integers, capacities of bottles.
// int max_bottles(vector<int> &v, int capacity)
// {
//     sort(v.begin(), v.end());
//     int count = 0;
//     for (auto i : v)
//     {
//         if (i < capacity)
//         {
//             count++;
//             capacity -= i;
//         }
//     }
//     return count;
// }
// int main()
// {
//     int test_cases;
//     cin >> test_cases;
//     while (test_cases--)
//     {
//         int bottles, container_capacity;
//         cin >> bottles >> container_capacity;
//         vector<int> v;
// for (int i = 0; i < bottles; i++)
// {
//     int a;
//     cin >> a;
//     v.push_back(a);
// }
//         cout << max_bottles(v, container_capacity) << endl;
//     }
// }

// The university offers N courses. Each course runs for some consecutive range of days. You are given starting and ending days of the ith course by starti and endi, respectively.
// Though he has Q such tentative plans in his mind. Each plan consists of a start date plan_startj and an end date plan_endj.
// Chef wants to find out the maximum number of courses he can complete during each of his plans. he can attend at most one course during a day.A course will be considered completed only if Chef attends all the classes of the course.
// class Course
// {
// public:
//     int start;
//     int end;
//     Course(int y, int z)
//     {
//         start = y;
//         end = z;
//     }
// };
// void sortvector(vector<Course> &v)
// {
//     sort(v.begin(), v.end(), [](Course &a, Course &b)
//          { return (a.end < b.end) || (a.end == b.end && (a.start < b.start)); });
// }
// int Max_Courses(vector<Course> v, pair<int, int> duration)
// {
//     int count = 0;
//     int st = duration.first, et = duration.second;
//     for (auto i : v)
//     {
//         if (i.start >= st && i.end <= et)
//         {
//             count++;
//             st = i.end;
//         }
//     }
//     return count;
// }
// int main()
// {
//     int plans;
//     int courses;
//     cin >> courses;
//     cin >> plans;
//     vector<Course> tenure;
//     for (int i = 0; i < courses; i++)
//     {
//         int a, b;
//         cin >> a >> b;
//         tenure.push_back(Course(a, b));
//     }
//     sortvector(tenure);
//     while (plans--)
//     {
//         pair<int, int> duration;
//         cin >> duration.first >> duration.second;
//         cout << Max_Courses(tenure, duration) << endl;
//     }
// }

// Our chef has recently opened a new restaurant with a unique style. The restaurant is divided into K compartments (numbered from 1 to K) and each compartment can be occupied by at most one customer.
// Each customer that visits the restaurant has a strongly preferred compartment p (1 ≤ p ≤ K), and if that compartment is already occupied, then the customer simply leaves.the chef wants to maximize number of customers that dine at his restaurant and so he allows (or disallows) certain customers.
// Given a list of N customers with their arrival time, departure time and the preferred compartment, you need to calculate the maximum number of customers that can dine at the restaurant.
// Input The first line contains an number of test cases. Each of the next T lines contains two integers N and K , the number of customers and the number of compartments the restaurant is divided into respectively.
// Each of the next N lines contains three integers si, fi and pi , the arrival time, departure time and the strongly preferred compartment of the ith customer respectively.
// Note that the ith customer wants to occupy the pith compartment from [si, fi) i.e the ith customer leaves just before fi so that another customer can occupy that compartment from fi onwards.
// Output For every test case, print the maximum number of customers that dine at the restaurant
// class Customer
// {
// public:
//     int arrival;
//     int departure;
//     int compartment_preferred;
//     Customer(int x, int y, int z)
//     {
//         arrival = x;
//         departure = y;
//         compartment_preferred = z;
//     }
// };
// void sortvector(vector<Customer> &v)
// {
//     sort(v.begin(), v.end(), [](Customer &a, Customer &b)
//          { return (a.compartment_preferred < b.compartment_preferred) || (a.compartment_preferred == b.compartment_preferred && ((a.departure < b.departure) || ((a.departure == b.departure) && ((a.arrival < b.arrival))))); });
// }
// int Max_Customers(vector<Customer> v, int compartments)
// {
//     int count = 0;
//     int curr = v[0].compartment_preferred;
//     for (int i = 1; i <= compartments; i++)
//     {
//         int st = 0;
//         for (auto j : v)
//         {
//             if (j.compartment_preferred == i)
//             {
//                 if (j.arrival >= st)
//                 {
//                     count++;
//                     st = j.departure;
//                 }
//             }
//         }
//     }
//     return count;
// }
// int main()
// {
//     int test_cases;
//     cin >> test_cases;
//     while (test_cases--)
//     {
//         int customers, compartments;
//         cin >> customers >> compartments;
//         vector<Customer> v;
//         while (customers--)
//         {
//             int a, b, c;
//             cin >> a >> b >> c;
//             v.push_back(Customer(a, b, c));
//         }
//         sortvector(v);
//         cout << Max_Customers(v, compartments);
//     }
// }

// Alice gives Bob a board composed of 1 x 1 wooden squares and asks him to find the minimum cost of breaking the board back down into its individual squares. To break the board down, Bob must make cuts along its horizontal and vertical lines.
// To reduce the board to squares, Bob makes horizontal and vertical cuts across the entire board. Each cut has a given cost,  or  for each cut along a row or column across one board, so the cost of a cut must be multiplied by the number of segments it crosses.Find the minimum cost?
// Two cuts are made for the horizontal then for the vertical.First cut is across piece, the whole board. The horizontal cut between rows.The second cuts are vertical through the two smaller boards created in step between columns so their cost is 2 * cut cost
// Input Format
// The first line contains an integer , the number of queries.
// The second line has two positive space-separated integers  and , the number of rows and columns in the board.
// The third line contains  space-separated integers cost_y[i], the cost of a horizontal cut between rows  and  of one board.
// The fourth line contains  space-separated integers cost_x[j], the cost of a vertical cut between columns  and  of one board.
// int Min_Cost(int r, int c, vector<int> r_cost, vector<int> c_cost)
// {
//     int curr_row = 1, curr_col = 1, i = 0, j = 0, tcost = 0;
//     while (curr_col < c && curr_row < r)
//     {
//         if (r_cost[i] >= c_cost[j])
//         {
//             tcost += curr_col * r_cost[i];
//             i++;
//             curr_row++;
//         }
//         else
//         {
//             tcost += curr_row * c_cost[j];
//             j++;
//             curr_col++;
//         }
//     }
//     while (curr_col < c)
//     {
//         tcost += curr_row * c_cost[j];
//         j++;
//         curr_col++;
//     }
//     while (curr_row < r)
//     {
//         tcost += curr_col * r_cost[i];
//         i++;
//         curr_row++;
//     }
//     return tcost;
// }
// int main()
// {
//     int queries;
//     cin >> queries;
//     while (queries--)
//     {
//         int r, c;
//         cin >> r >> c;
//         vector<int> r_cost(r - 1);
//         for (auto &i : r_cost)
//         {
//             cin >> i;
//         }
//         sort(r_cost.rbegin(), r_cost.rend());
//         vector<int> c_cost(c - 1);
//         for (auto &i : c_cost)
//         {
//             cin >> i;
//         }
//         sort(c_cost.rbegin(), c_cost.rend());
//         cout << Min_Cost(r, c, r_cost, c_cost) << endl;
//     }
// }

