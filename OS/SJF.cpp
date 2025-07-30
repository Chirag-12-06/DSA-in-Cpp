#include <iostream>
using namespace std;

int main() {

	// Matrix for storing Process Id, Burst
	// Time, Average Waiting Time & Average
	// Turn Around Time.
	int A[100][4];
	int n, total = 0;
	float avg_wt, avg_tat;

	cout << "Enter number of process: ";    cin >> n;
	cout << "Enter Burst Time:" << endl;

	// User Input Burst Time and alloting Process Id.
	for (int i = 0; i < n; i++) {
		cout << "P" << i + 1 << ": ";   cin >> A[i][1];
		A[i][0] = i + 1;
	}

	// Sorting process according to their Burst Time.
	for (int i = 0; i < n; i++) {
		int index = i;
		for (int j = i + 1; j < n; j++)
			if (A[j][1] < A[index][1])
				index = j;
        swap(A[i][1],A[index][1]);
        swap(A[i][0],A[index][0]);
	}

	A[0][2] = 0;
	// Calculation of Waiting Times
	for (int i = 1; i < n; i++) {
		A[i][2] = 0;
		for (int j = 0; j < i; j++)
			A[i][2] += A[j][1];
		total += A[i][2];
	}

	avg_wt = (float)total / n;
	total = 0;
	cout << "P	 BT	 WT	 TAT" << endl;

	// Calculation of Turn Around Time and printing the data.
	for (int i = 0; i < n; i++) {
		A[i][3] = A[i][1] + A[i][2];
		total += A[i][3];
		cout << "P" << A[i][0] << "	 " << A[i][1] << "	 " << A[i][2] << "	 " << A[i][3] << endl;
	}

	avg_tat = (float)total / n;
	cout << "Average Waiting Time= " << avg_wt << endl;
	cout << "Average Turnaround Time= " << avg_tat << endl;
}
