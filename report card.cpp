#include <iostream>
#include <limits.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int mark;
    int highest = INT_MIN;
    int lowest = INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> mark;
        if (mark > highest)
            highest = mark;
        if (mark < lowest)
            lowest = mark;
    }

    cout << "Highest = " << highest << endl;
    cout << "Lowest = " << lowest;

    return 0;
}
