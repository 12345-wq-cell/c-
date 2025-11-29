#include <iostream>

#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;

    int marks, total = 0;

    for (int i = 0; i < n; i++) {
        cin >> marks;
        total += marks;
    }

    double average = (double)total / n;

    cout << "Total Marks = " << total << endl;
    cout << fixed << setprecision(2);
    cout << "Average Marks = " << average;

    return 0;
}