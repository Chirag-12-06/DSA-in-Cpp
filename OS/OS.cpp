#include <iostream>
#include <vector>
#include <algorithm>
//#include <iomanip>
#include <queue>
using namespace std;

struct Process {
    int id;
    int burst_time;
    int arrival_time;
    int priority;
    int waiting_time;
    int turnaround_time;
};

void nonPreemptivePriorityScheduling(vector<Process>& processes) {
    int n = processes.size();
    vector<int> completion_time(n);
    sort(processes.begin(), processes.end(), [](Process a, Process b) {
        if (a.arrival_time == b.arrival_time)
            return a.priority < b.priority;
        return a.arrival_time < b.arrival_time;
        }
    );
    int current_time = 0;

    for (int i = 0; i < n; ) {
        int idx = -1;
        for (int j = i; j < n; j++) {
            if (processes[j].arrival_time <= current_time) {
                if (idx == -1 || processes[j].priority < processes[idx].priority)
                    idx = j;
            } else {
                break;
            }
        }

        if (idx != -1) {
            current_time += processes[idx].burst_time;
            completion_time[idx] = current_time;

            processes[idx].waiting_time = current_time - processes[idx].arrival_time - processes[idx].burst_time;

            processes[idx].turnaround_time = processes[idx].waiting_time + processes[idx].burst_time;

            swap(processes[i], processes[idx]); // Swap to maintain order for the output
            i++;
        }
        else {
            current_time++;
        }
    }

    cout << "\nNon-Preemptive Priority Scheduling:\n";
    cout << "Process\tBurst Time\tArrival Time\tPriority\tWaiting Time\tTurnaround Time\n";
    double total_waiting_time = 0, total_turnaround_time = 0;
    for (const auto& p : processes) {
        cout << p.id << "\t" << p.burst_time << "\t\t" << p.arrival_time << "\t\t"
             << p.priority << "\t\t" << p.waiting_time << "\t\t" << p.turnaround_time << "\n";
        total_waiting_time += p.waiting_time;
        total_turnaround_time += p.turnaround_time;
    }
    cout << "Average Waiting Time: " << total_waiting_time / n << endl;
    cout << "Average Turnaround Time: " << total_turnaround_time / n << endl;
}

void preemptivePriorityScheduling(vector<Process>& processes) {
    int n = processes.size();
    vector<int> remaining_time(n);
    for (int i = 0; i < n; ++i) {
        remaining_time[i] = processes[i].burst_time;
    }
    sort(processes.begin(), processes.end(), [](Process a, Process b) {
        return a.arrival_time < b.arrival_time;
    });
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    int current_time = 0, completed = 0;
    vector<int> waiting_time(n, 0); 
    while (completed < n) {
        for (int i = 0; i < n; ++i) {
            if (processes[i].arrival_time <= current_time && remaining_time[i] > 0) {
                pq.push({processes[i].priority, i});
            }
        }
        if (!pq.empty()) {
            int idx = pq.top().second;
            pq.pop();
            remaining_time[idx]--;
            if (remaining_time[idx] == 0) {
                waiting_time[idx] = current_time + 1 - processes[idx].arrival_time - processes[idx].burst_time;
                completed++;
            }
            current_time++;
        } else {
            current_time++;
        }
    }
    cout << "\nPreemptive Priority Scheduling:\n";
    cout << "Process\tBurst Time\tArrival Time\tPriority\tWaiting Time\n";
    double total_waiting_time = 0;
    for (int i = 0; i < n; ++i) {
        cout << processes[i].id << "\t" << processes[i].burst_time << "\t\t"
             << processes[i].arrival_time << "\t\t" << processes[i].priority << "\t\t" << waiting_time[i] << "\n";
        total_waiting_time += waiting_time[i];
    }
    cout << "Average Waiting Time: " << total_waiting_time / n << endl;
}

void roundRobinScheduling(vector<Process>& processes, int quantum) {
    int n = processes.size();
    vector<int> remaining_time(n);
    for (int i = 0; i < n; ++i) {
        remaining_time[i] = processes[i].burst_time;
    }
    queue<int> q;
    int current_time = 0;
    vector<int> waiting_time(n, 0);
    vector<int> completion_time(n, 0);
    int completed = 0;
    while (completed < n) {
        for (int i = 0; i < n; ++i) {
            if (processes[i].arrival_time <= current_time && remaining_time[i] > 0) {
                q.push(i);
            }
        }
        if (!q.empty()) {
            int idx = q.front();
            q.pop();
            if (remaining_time[idx] > quantum) {
                current_time += quantum;
                remaining_time[idx] -= quantum;
            } else {
                current_time += remaining_time[idx];
                waiting_time[idx] = current_time - processes[idx].arrival_time - processes[idx].burst_time;
                remaining_time[idx] = 0;
                completion_time[idx] = current_time;
                completed++;
            }
        } else {
            current_time++;
        }
    }
    cout << "\nRound Robin Scheduling:\n";
    cout << "Process\tBurst Time\tArrival Time\tWaiting Time\n";
    double total_waiting_time = 0;
    for (int i = 0; i < n; ++i) {
        cout << processes[i].id << "\t" << processes[i].burst_time << "\t\t"
             << processes[i].arrival_time << "\t\t" << waiting_time[i] << "\n";
        total_waiting_time += waiting_time[i];
    }
    cout << "Average Waiting Time: " << total_waiting_time / n << endl;
}

int main() {
    int n;
    cout << "Enter number of processes: ";  cin >> n;

    vector<Process> processes(n);
    for (int i = 0; i < n; ++i) {
        processes[i].id = i + 1;
        cout << "Enter Burst Time, Arrival Time and Priority for Process " << i + 1 << ": ";
        cin >> processes[i].burst_time >> processes[i].arrival_time >> processes[i].priority;
    }
    int choice;
    cout << "Select scheduling algorithm:\n";
    cout << "1. Non-Preemptive Priority Scheduling\n";
    cout << "2. Preemptive Priority Scheduling\n";
    cout << "3. Round Robin Scheduling\n";
    cin >> choice;
    if (choice == 1) {
        nonPreemptivePriorityScheduling(processes);
    } else if (choice == 2) {
        preemptivePriorityScheduling(processes);
    } else if (choice == 3) {
        int quantum;
        cout << "Enter time quantum for Round Robin: ";
        cin >> quantum;
        roundRobinScheduling(processes, quantum);
    } else {
        cout << "Invalid choice!\n";
    }
    return 0;
}


