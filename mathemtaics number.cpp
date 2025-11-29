#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Check Prime
    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;
    } else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
        cout << "Prime Number" << endl;
    else
        cout << "Not Prime" << endl;

    // Check Even or Odd
    if (n % 2 == 0)
        cout << "Even Number";
    else
        cout << "Odd Number";

    return 0;
}
