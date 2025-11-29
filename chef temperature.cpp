#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double C;
    cin >> C;

    double F = (C * 9.0 / 5.0) + 32;

    cout << fixed << setprecision(2);
    cout << "Temperature in Fahrenheit = " << F;

    return 0;
}
