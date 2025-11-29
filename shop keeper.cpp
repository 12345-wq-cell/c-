#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Check even or odd
    if (n % 2 == 0)
        cout << "Even Number" << endl;
    else
        cout << "Odd Number" << endl;

    // Check divisibility by 5
    if (n % 5 == 0)
        cout << "Divisible by 5";
    else
        cout << "Not Divisible by 5";

    return 0;
}
