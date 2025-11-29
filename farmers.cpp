#include <iostream>
using namespace std;

int main() {
    int length, width;
    cin >> length >> width;

    int area = length * width;
    int perimeter = 2 * (length + width);

    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;

    return 0;
}
