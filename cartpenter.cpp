#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int x = a, y = b;

    // GCD using Euclid's Algorithm
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }

    int gcd = x;
    int lcm = (a * b) / gcd;

    cout << "GCD = " << gcd << endl;
    cout << "LCM = " << lcm;

    return 0;
}
